#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, S;
  cin >> N >> S;
  vector<int> A(N + 1, 0);
  for (int i = 1; i <= N; i++)
  {
    cin >> A[i];
  }

  vector<vector<bool>> dp(N + 1, vector<bool>(S + 1, false));
  dp[0][0] = true;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= S; j++)
    {
      if (j < A[i])
      {
        if (dp[i - 1][j] == true) // Ajを選択しない場合
        {
          dp[i][j] = true;
        }
      }
      else if (j >= A[i])
      {
        if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true)
        {
          dp[i][j] = true;
        }
      }
    }
  }
  string ans = "No";
  if (dp[N][S] == true)
  {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}