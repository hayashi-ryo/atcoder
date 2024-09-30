#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A(N), B(N), C(N), D(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i] >> B[i] >> C[i] >> D[i];
    A[i]--;
    B[i]--;
    C[i]--;
    D[i]--;
  }

  // 積雪情報を登録
  vector<vector<int>> snow(H + 1, vector<int>(W + 1, 0));
  for (int i = 0; i < N; i++)
  {
    snow[A[i]][B[i]]++;
    snow[A[i]][D[i] + 1]--;
    snow[C[i] + 1][B[i]]--;
    snow[C[i] + 1][D[i] + 1]++;
  }

  // 累積和を計算
  vector<vector<int>> sumSnow(H + 1, vector<int>(W + 1, 0));
  for (int i = 1; i <= H; i++)
  {
    for (int j = 1; j <= W; j++)
    {
      sumSnow[i][j] = snow[i - 1][j - 1] + sumSnow[i - 1][j] + sumSnow[i][j - 1] - sumSnow[i - 1][j - 1];
    }
  }

  // 結果を出力
  for (int i = 1; i <= H; i++)
  {
    for (int j = 1; j <= W; j++)
    {
      if (j != 1)
      {
        cout << " ";
      }
      cout << sumSnow[i][j];
    }
    cout << endl;
  }
  return 0;
}