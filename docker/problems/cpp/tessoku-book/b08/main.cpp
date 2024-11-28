#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N;
  vector<int> X(N), Y(N);
  vector<vector<int>> cell(1501, vector<int>(1501, 0)), sumCells(1501, vector<int>(1501, 0));
  rep(i, N) cin >> X[i] >> Y[i], cell[X[i]][Y[i]]++;
  cin >> Q;
  vector<int> a(Q), b(Q), c(Q), d(Q);
  rep(i, Q) cin >> a[i] >> b[i] >> c[i] >> d[i];

  for (int i = 1; i <= 1500; i++)
  {
    for (int j = 1; j <= 1500; j++)
    {
      sumCells[i][j] = cell[i][j] + sumCells[i - 1][j] + sumCells[i][j - 1] - sumCells[i - 1][j - 1];
    }
  }

  for (int i = 0; i < Q; i++)
  {
    cout << sumCells[c[i]][d[i]] - sumCells[c[i]][b[i] - 1] - sumCells[a[i] - 1][d[i]] + sumCells[a[i] - 1][b[i] - 1] << endl;
  }

  return 0;
}