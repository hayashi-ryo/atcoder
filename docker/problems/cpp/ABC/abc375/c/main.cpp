#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<string> A(N);
  rep(i, N) cin >> A[i];

  string space;
  rep(i, N) space += ' ';
  vector<vector<string>> B(4, vector<string>(N, space));

  for (int i = 0; i < 4; i++)
  {
    for (int x = 0; x < N; x++)
    {
      for (int y = 0; y < N; y++)
      {
        if (i == 0)
        {
          B[i][y][N - 1 - x] = A[x][y];
        }
        else
        {
          B[i][y][N - 1 - x] = B[i - 1][x][y];
        }
      }
    }
  }

  vector<string> ans(N, space);
  for (int x = 0; x < N; x++)
  {
    for (int y = 0; y < N; y++)
    {
      int idx = min(min(x, N - 1 - x), min(y, N - 1 - y)) % 4;
      ans[x][y] = B[idx][x][y];
    }
  }
  for (int i = 0; i < N; i++)
  {
    cout << ans[i] << endl;
  }

  return 0;
}