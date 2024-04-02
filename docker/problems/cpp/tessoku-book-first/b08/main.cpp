#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N;
  vector<vector<int>> xy(1502, vector<int>(1502));
  for (int i = 0; i < N; i++)
  {
    int x = 0, y = 0;
    cin >> x >> y;
    xy[x][y]++;
  }

  cin >> Q;
  vector<int> a(Q + 1), b(Q + 1), c(Q + 1), d(Q + 1);
  for (int i = 1; i <= Q; i++)
  {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  // 二次元累積和を計算
  vector<vector<int>> sumxy(1501, vector<int>(1501));
  // 横方向を計算
  for (int i = 1; i <= 1500; ++i)
  {
    for (int j = 1; j <= 1500; ++j)
    {
      sumxy[i][j] = sumxy[i][j - 1] + xy[i][j];
    }
  }
  // 縦方向を計算
  for (int j = 1; j <= 1500; ++j)
  {
    for (int i = 1; i <= 1500; ++i)
    {
      sumxy[i][j] = sumxy[i - 1][j] + sumxy[i][j];
    }
  }

  // 出力
  for (int i = 1; i <= Q; i++)
  {
    cout << sumxy[c[i]][d[i]] - sumxy[c[i]][b[i] - 1] - sumxy[a[i] - 1][d[i]] + sumxy[a[i] - 1][b[i] - 1] << endl;
  }
  return 0;
}