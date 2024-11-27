#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long N, W;
  cin >> N >> W;
  long long w[N + 1];
  long long v[N + 1];
  long long sum = 0;
  w[0] = 0;
  v[0] = 0;
  for (int i = 1; i <= N; i++)
  {
    cin >> w[i] >> v[i];
    sum += v[i];
  }
  long long dp[sum + 1][N + 1];
  dp[0][0] = 0;
  for (int i = 1; i <= N; i++)
  {
    dp[0][i] = 0;
  }
  for (int i = 1; i <= sum; i++)
  {
    dp[i][0] = 1000000001;
  }
  for (int i = 1; i <= sum; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      if (i < v[j])
        dp[i][j] = dp[i][j - 1];
      else
        dp[i][j] = min(dp[i][j - 1], dp[i - v[j]][j - 1] + w[j]);
    }
  }
  long long ans;
  for (int i = sum; i >= 1; i--)
  {
    if (dp[i][N] <= W)
    {
      cout << i << endl;
      break;
    }
  }
}