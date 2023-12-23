#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int N;

int main()
{
  cin >> N;
  vector<vector<int>> cells(100, vector<int>(100));
  for (int i = 0; i < N; i++)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int j = a; j < b; j++)
    {
      for (int k = c; k < d; k++)
      {
        cells[j][k] = 1;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < 100; i++)
  {
    for (int j = 0; j < 100; j++)
    {
      if (cells[i][j] == 1)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
}