#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<int>> X(H, vector<int>(W));
  rep(i, H) rep(j, W) cin >> X[i][j];

  int Q;
  cin >> Q;
  vector<int> A(Q), B(Q), C(Q), D(Q);
  for (int i = 0; i < Q; i++)
  {
    cin >> A[i] >> B[i] >> C[i] >> D[i];
    // 0-indexed
    A[i]--;
    B[i]--;
    C[i]--;
    D[i]--;
  }

  vector<vector<int>> sumX(H, vector<int>(W, 0));
  // 累積和計算
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      sumX[i][j] = X[i][j];
      if (i > 0)
        sumX[i][j] += sumX[i - 1][j];
      if (j > 0)
        sumX[i][j] += sumX[i][j - 1];
      if (i > 0 && j > 0)
        sumX[i][j] -= sumX[i - 1][j - 1];
    }
  }

  for (int i = 0; i < Q; i++)
  {
    int ans = sumX[C[i]][D[i]];
    if (A[i] > 0)
      ans -= sumX[A[i] - 1][D[i]];
    if (B[i] > 0)
      ans -= sumX[C[i]][B[i] - 1];
    if (A[i] > 0 && B[i] > 0)
      ans += sumX[A[i] - 1][B[i] - 1];
    cout << ans << endl;
  }

  return 0;
}
