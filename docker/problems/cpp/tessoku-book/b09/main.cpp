#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
const int LIMITXY = 1600;
int main()
{
  // 入力
  int N;
  cin >> N;
  vector<vector<int>> Area(2000, vector<int>(2000, 0));
  vector<vector<int>> sumArea(2000, vector<int>(2000, 0));
  vector<int> a(N), b(N), c(N), d(N);
  for (int i = 0; i < N; i++)
  {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  for (int i = 0; i < N; i++)
  {
    sumArea[a[i]][b[i]]++;
    sumArea[a[i]][d[i]]--;
    sumArea[c[i]][b[i]]--;
    sumArea[c[i]][d[i]]++;
  }

  // 累積和を計算

  // y方向
  for (int x = 0; x <= LIMITXY; x++)
  {
    for (int y = 1; y <= LIMITXY; y++)
    {
      sumArea[x][y] = sumArea[x][y - 1] + sumArea[x][y];
    }
  }

  // 縦方向
  for (int x = 1; x <= LIMITXY; x++)
  {
    for (int y = 0; y <= LIMITXY; y++)
    {
      sumArea[x][y] = sumArea[x - 1][y] + sumArea[x][y];
    }
  }

  // 出力
  ll ans = 0;
  for (int x = 0; x <= LIMITXY; x++)
  {
    for (int y = 0; y <= LIMITXY; y++)
    {
      if (sumArea[x][y] > 0)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}