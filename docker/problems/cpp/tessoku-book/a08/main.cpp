#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{

  int H, W;
  cin >> H >> W;
  vector<vector<int>> cells(H + 1, vector<int>(W + 1, 0));
  // 各セルの値を入力
  for (int i = 1; i <= H; ++i)
  {
    for (int j = 1; j <= W; ++j)
    {
      cin >> cells[i][j];
    }
  }

  // 二次元累積和を計算
  vector<vector<int>> sumCells(H + 1, vector<int>(W + 1, 0));
  for (int i = 1; i <= H; ++i) // 横方法
  {
    for (int j = 1; j <= W; ++j)
    {
      sumCells[i][j] = sumCells[i][j - 1] + cells[i][j];
    }
  }

  for (int j = 1; j <= W; ++j)
  {
    for (int i = 1; i <= H; ++i)
    {
      sumCells[i][j] = sumCells[i - 1][j] + sumCells[i][j];
    }
  }

  // 各設問の情報を入力
  int Q;
  cin >> Q;
  vector<int> A(Q + 1), B(Q + 1), C(Q + 1), D(Q + 1);
  for (int i = 1; i <= Q; i++)
  {
    cin >> A[i] >> B[i] >> C[i] >> D[i];
  }

  // 答えの出力を実施
  for (int i = 1; i <= Q; i++)
  {
    cout << sumCells[C[i]][D[i]] + sumCells[A[i] - 1][B[i] - 1] - sumCells[A[i] - 1][D[i]] - sumCells[C[i]][B[i] - 1] << endl;
  }
  return 0;
}