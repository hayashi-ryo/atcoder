#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N, W;
  cin >> N >> W;
  ll w[109], v[109];
  ll dp[109][100009];
  for (int i = 1; i <= N; i++)
  {
    cin >> w[i] >> v[i];
  }

  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      dp[i][j] = -1'000'000'000'000LL;
    }
  }

  dp[0][0] = 0;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      if (j < w[i])
      {
        dp[i][j] = dp[i - 1][j];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
      }
    }
  }

  ll ans = 0;
  for (int i = 0; i <= W; i++)
  {
    ans = max(ans, dp[N][i]);
  }
  cout << ans << endl;

  return 0;
}