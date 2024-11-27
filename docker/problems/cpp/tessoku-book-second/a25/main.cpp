#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll H, W;
  cin >> H >> W;
  vector<vector<char>> c(H + 1, vector<char>(W + 1));
  for (int i = 1; i <= H; i++)
  {
    for (int j = 1; j <= W; j++)
    {
      cin >> c[i][j];
    }
  }

  vector<vector<ll>> dp(H + 1, vector<ll>(W + 1, 0));
  for (int i = 1; i <= H; i++)
  {
    for (int j = 1; j <= W; j++)
    {
      if (i == 1 && j == 1) // スタート地点
      {
        dp[i][j] = 1;
      }
      else
      {
        if (i > 1 && c[i - 1][j] == '.')
        {
          dp[i][j] += dp[i - 1][j];
        }
        if (j > 1 && c[i][j - 1] == '.')
        {
          dp[i][j] += dp[i][j - 1];
        }
      }
    }
  }

  cout << dp[H][W] << endl;
  return 0;
}