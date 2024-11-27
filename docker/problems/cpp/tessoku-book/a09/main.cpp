#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A(N), B(N), C(N), D(N);
  vector<vector<int>> snow(H, vector<int>(W, 0)), sumSnow(H, vector<int>(W, 0));

  for (int i = 0; i < N; i++)
  {
    cin >> A[i] >> B[i] >> C[i] >> D[i];
    // 0-indexed
    A[i]--;
    B[i]--;
    C[i]--;
    D[i]--;
    snow[A[i]][B[i]]++;
    if (D[i] + 1 < W)
      snow[A[i]][D[i] + 1]--;
    if (C[i] + 1 < H)
      snow[C[i] + 1][B[i]]--;
    if (C[i] + 1 < H && D[i] + 1 < W)
      snow[C[i] + 1][D[i] + 1]++;
  }

  // 累積和を計算
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      sumSnow[i][j] = snow[i][j];
      if (i > 0)
        sumSnow[i][j] += sumSnow[i - 1][j];
      if (j > 0)
        sumSnow[i][j] += sumSnow[i][j - 1];
      if (i > 0 && j > 0)
        sumSnow[i][j] -= sumSnow[i - 1][j - 1];
    }
  }

  // 出力
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (j != 0)
      {
        cout << " ";
      }
      cout << sumSnow[i][j];
    }
    cout << endl;
  }

  return 0;
}
