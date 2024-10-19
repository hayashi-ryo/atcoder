#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<string> cell(N);
  rep(i, N) cin >> cell[i];
  vector<string> ans = cell;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (i == 0 || j == 0 || i == N - 1 || j == N - 1)
      {
        if (i == 0 && j < N - 1)
          ans[i][j + 1] = cell[i][j];
        if (i < N - 1 && j == N - 1)
          ans[i + 1][j] = cell[i][j];
        if (i == N - 1 && j > 0)
          ans[i][j - 1] = cell[i][j];
        if (i > 0 && j == 0)
          ans[i - 1][j] = cell[i][j];
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    cout << ans[i] << endl;
  }

  return 0;
}