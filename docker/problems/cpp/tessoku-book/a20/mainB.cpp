#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S, T;
  cin >> S >> T;
  int N = S.size();
  int M = T.size();
  vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
  dp[0][0] = 0;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= M; j++)
    {
      if (S[i - 1] == T[j - 1])
      {
        dp[i][j] = max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] + 1});
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  cout << dp[N][M] << endl;
  return 0;
}