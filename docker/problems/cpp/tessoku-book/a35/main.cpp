#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N + 1);
  for (int i = 1; i <= N; i++)
  {
    cin >> A[i];
  }

  vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
  for (int i = 1; i <= N; i++)
  {
    dp[N][i] = A[i];
  }

  for (int i = N - 1; i >= 1; --i)
  {
    for (int j = 1; j <= i; j++)
    {
      if (i % 2 == 1)
      {
        dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]);
      }
      else
      {
        dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]);
      }
    }
  }

  cout << dp[1][1] << endl;

  return 0;
}