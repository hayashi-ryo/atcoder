#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, W;
  cin >> N >> W;
  vector<pair<ll, ll>> goods(N + 1);
  rep(i, N) cin >> goods[i + 1].first >> goods[i + 1].second;

  vector<vector<ll>> dp(N + 1, vector<ll>(W + 1, 0));
  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      if (j < goods[i].first)
      {
        dp[i][j] = dp[i - 1][j];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - goods[i].first] + goods[i].second);
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