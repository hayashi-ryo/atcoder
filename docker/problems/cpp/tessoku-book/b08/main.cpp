#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N;
  vector<vector<int>> cell(1600, vector<int>(1600, 0));
  for (int i = 0; i < N; i++)
  {
    int x, y;
    cin >> x >> y;
    cell[x][y]++;
  }
  cin >> Q;
  vector<int> a(Q), b(Q), c(Q), d(Q);
  rep(i, Q) cin >> a[i] >> b[i] >> c[i] >> d[i];
  // 累積和を計算
  vector<vector<int>> sumCell(1600, vector<int>(1600, 0));
  for (int i = 1; i <= 1500; i++)
  {
    for (int j = 1; j <= 1500; j++)
    {
      sumCell[i][j] = cell[i][j] + sumCell[i - 1][j] + sumCell[i][j - 1] - sumCell[i - 1][j - 1];
    }
  }

  // 累積和の情報を元に結果を出力
  for (int i = 0; i < Q; i++)
  {
    cout << sumCell[c[i]][d[i]] - sumCell[c[i]][b[i] - 1] - sumCell[a[i] - 1][d[i]] + sumCell[a[i] - 1][b[i] - 1] << endl;
  }
  return 0;
}
