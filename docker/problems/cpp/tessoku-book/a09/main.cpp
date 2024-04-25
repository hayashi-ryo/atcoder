#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  /*
  方針:
  積雪を部分累積和として計上していく
  */

  // 情報の入力
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> a(N + 2);
  vector<int> b(N + 2);
  vector<int> c(N + 2);
  vector<int> d(N + 2);
  for (int i = 1; i <= N; ++i)
  {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  // 各点の値を投入
  vector<vector<int>>
      z(H + 2, vector<int>(W + 2));
  for (int i = 1; i <= N; ++i)
  {
    z[a[i]][b[i]]++;
    z[a[i]][d[i] + 1]--;
    z[c[i] + 1][b[i]]--;
    z[c[i] + 1][d[i] + 1]++;
  }

  // 累積和を計算
  vector<vector<int>> sumZ(H + 2, vector<int>(W + 2));
  // 横方向
  for (int i = 1; i <= H; ++i)
  {
    for (int j = 1; j <= W; ++j)
    {
      sumZ[i][j] = sumZ[i][j - 1] + z[i][j];
    }
  }
  // 縦方向
  for (int j = 1; j <= W; ++j)
  {
    for (int i = 1; i <= H; ++i)
    {
      sumZ[i][j] = sumZ[i - 1][j] + sumZ[i][j];
    }
  }

  // 結果を出力
  for (int i = 1; i <= H; ++i)
  {
    for (int j = 1; j <= W; ++j)
    {
      if (j >= 2)
      {
        cout << " ";
      }
      cout << sumZ[i][j];
    }
    cout << endl;
  }
  return 0;
}