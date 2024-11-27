#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  string S;
  cin >> N >> S;
  vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));

  // 1文字の区間はすべて長さ1の回文となる
  for (int i = 0; i <= N; i++)
  {
    dp[i][i] = 1;
  }

  // 区間の長さが短いものから計算する
  for (int LEN = 2; LEN <= N; ++LEN)
  {
    for (int i = 0; i <= N - LEN; ++i)
    {
      int j = i + LEN - 1;
      if (S[i] == S[j])
      {
        dp[i][j] = dp[i + 1][j - 1] + 2;
      }
      else
      {
        dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
      }
    }
  }

  cout << dp[0][N - 1] << endl;
  return 0;
}