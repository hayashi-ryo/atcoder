#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string sourceStr, targetStr;
  cin >> sourceStr >> targetStr;
  int sourceLen = (int)sourceStr.size(), targetLen = (int)targetStr.size();
  vector<vector<int>> dp(targetLen + 1, vector<int>(sourceLen + 1, 0));
  for (int i = 0; i <= targetLen; i++)
  {
    dp[i][0] = i;
  }
  for (int j = 0; j <= sourceLen; j++)
  {
    dp[0][j] = j;
  }

  for (int i = 1; i <= targetLen; i++)
  {
    for (int j = 1; j <= sourceLen; j++)
    {
      int cost = (sourceStr[j - 1] == targetStr[i - 1]) ? 0 : 1;
      dp[i][j] = min(
          {dp[i - 1][j] + 1,
           dp[i][j - 1] + 1,
           dp[i - 1][j - 1] + cost});
    }
  }

  cout << dp[targetLen][sourceLen] << endl;

  return 0;
}