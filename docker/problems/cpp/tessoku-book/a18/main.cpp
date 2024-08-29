#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, S;
  cin >> N >> S;
  vector<int> A(N + 1);
  rep(i, N) cin >> A[i + 1];

  // dp定義
  vector<vector<bool>> dp(N + 1, vector<bool>(S + 1, false));
  dp[0][0] = true;
  for (int i = 1; i <= N; i++) // カードの枚数
  {
    for (int j = 0; j <= S; j++) // 整数の合計
    {
      if (j < A[i]) // A_j を選択できない場合
      {
        dp[i][j] = dp[i - 1][j];
      }
      else // A_j を選択できる場合
      {
        if (dp[i - 1][j] == true           // A_j を選択しない
            || dp[i - 1][j - A[i]] == true // A_jを選択する
        )
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