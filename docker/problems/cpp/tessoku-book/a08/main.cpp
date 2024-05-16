#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int H, W, Q;
  cin >> H >> W;
  vector<vector<int>> cell(H, vector<int>(W, 0));
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      cin >> cell[i][j];
    }
  }
  cin >> Q;
  vector<int> A(Q), B(Q), C(Q), D(Q);
  for (int i = 0; i < Q; i++)
  {
    cin >> A[i] >> B[i] >> C[i] >> D[i];
    A[i]--;
    B[i]--;
    C[i]--;
    D[i]--;
  }

  // 二次元累積和の計算
  vector<vector<int>> sumCell(H + 1, vector<int>(W + 1, 0));
  for (int i = 1; i <= H; i++)
  {
    for (int j = 1; j <= W; j++)
    {
      sumCell[i][j] = cell[i - 1][j - 1] + sumCell[i - 1][j] + sumCell[i][j - 1] - sumCell[i - 1][j - 1];
    }
  }

  // クエリに応じた範囲内の合計値を計算
  for (int i = 0; i < Q; i++)
  {
    int ans = sumCell[C[i] + 1][D[i] + 1];
    if (A[i] > 0)
      ans -= sumCell[A[i]][D[i] + 1];
    if (B[i] > 0)
      ans -= sumCell[C[i] + 1][B[i]];
    if (A[i] > 0 && B[i] > 0)
      ans += sumCell[A[i]][B[i]];
    cout << ans << endl;
  }

  return 0;
}