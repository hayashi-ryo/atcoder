#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> P(N + 1), A(N + 1);
  vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
  rep(i, N) cin >> P[i + 1] >> A[i + 1];

  for (int len = N - 2; len >= 0; --len)
  {
    for (int l = 1; l <= N - len; ++l)
    {
      int r = l + len;
      int score1 = 0, score2 = 0;
      if (l <= P[l - 1] && P[l - 1] <= r) // 左端を取り除く
      {
        score1 = A[l - 1];
      }

      if (l <= P[r + 1] && P[r + 1] <= r) // 左端を取り除く
      {
        score2 = A[r + 1];
      }

      if (l == 1)
      {
        dp[l][r] = dp[l][r + 1] + score2;
      }
      else if (r == N)
      {
        dp[l][r] = dp[l - 1][r] + score1;
      }
      else
      {
        dp[l][r] = max({dp[l][r], dp[l - 1][r] + score1, dp[l][r + 1] + score2});
      }
    }
  }

  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    ans = max(ans, dp[i][i]);
  }
  cout << ans << endl;
  return 0;
}