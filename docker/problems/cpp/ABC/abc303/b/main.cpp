#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(M, vector<int>(N));
  vector<vector<bool>> photo(N, vector<bool>(N, false));
  rep(i, N) photo[i][i] = true;
  rep(i, M) rep(j, N) cin >> A[i][j], A[i][j]--;
  for (int i = 0; i < M; i++)
  {
    for (int j = 1; j < N; j++)
    {
      photo[A[i][j]][A[i][j - 1]] = true;
      photo[A[i][j - 1]][A[i][j]] = true;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (!photo[i][j])
      {
        ++ans;
      }
    }
  }

  cout << ans / 2 << endl;
  return 0;
}