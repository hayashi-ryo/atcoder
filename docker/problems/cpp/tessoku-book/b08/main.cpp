#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
const int LIMITXY = 1500;
int main()
{
  int N;
  cin >> N;
  vector<vector<int>> cells(2000, vector<int>(2000, 0));
  for (int i = 0; i < N; i++)
  {
    int x, y;
    cin >> x >> y;
    cells[x][y]++;
  }

  // 累積和の計算
  vector<vector<int>> sumCells(2000, vector<int>(2000, 0));
  // 横方向
  for (int x = 1; x <= LIMITXY; x++)
  {
    for (int y = 1; y <= LIMITXY; y++)
    {
      sumCells[x][y] = sumCells[x][y - 1] + cells[x][y];
    }
  }
  // 縦方向
  for (int y = 1; y <= LIMITXY; y++)
  {
    for (int x = 1; x <= LIMITXY; x++)
    {
      sumCells[x][y] = sumCells[x - 1][y] + sumCells[x][y];
    }
  }
  // 出力
  int Q;
  cin >> Q;

  for (int i = 0; i < Q; i++)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << sumCells[c][d] - sumCells[a - 1][d] - sumCells[c][b - 1] + sumCells[a - 1][b - 1] << endl;
  }

  return 0;
}