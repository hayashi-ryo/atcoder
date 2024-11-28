#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N), D(N);
  vector<vector<int>> cell(1501, vector<int>(1501, 0)), sumCells(1501, vector<int>(1501, 0));
  for (int i = 0; i < N; i++)
  {
    cin >> A[i] >> B[i] >> C[i] >> D[i];
    cell[A[i]][B[i]]++;
    cell[A[i]][D[i]]--;
    cell[C[i]][B[i]]--;
    cell[C[i]][D[i]]++;
  }

  // 累積和を計算
  for (int i = 0; i <= 1500; i++)
  {
    for (int j = 0; j <= 1500; j++)
    {
      sumCells[i][j] = cell[i][j];
      if (i > 0)
      {
        sumCells[i][j] += sumCells[i - 1][j];
      }
      if (j > 0)
      {
        sumCells[i][j] += sumCells[i][j - 1];
      }
      if (i > 0 && j > 0)
      {
        sumCells[i][j] -= sumCells[i - 1][j - 1];
      }
    }
  }

  int ans = 0;
  for (int i = 0; i <= 1500; i++)
  {
    for (int j = 0; j <= 1500; j++)
    {
      if (sumCells[i][j] > 0)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}