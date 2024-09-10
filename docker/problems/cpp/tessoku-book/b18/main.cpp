#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, S;
  cin >> N >> S;
  vector<int> A(N + 1, 0);
  rep(i, N) cin >> A[i + 1];

  vector<vector<bool>> dp(N + 1, vector<bool>(S + 1, false));
  dp[0][0] = true;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= S; j++)
    {
      if (j < A[i]) // A_i を選択できない
      {
        dp[i][j] = dp[i - 1][j];
      }
      else
      {
        if (
            dp[i - 1][j] == true ||     // A_i を選択しない
            dp[i - 1][j - A[i]] == true // A_i を選択する
        )
        {
          dp[i][j] = true;
        }
      }
    }
  }

  // 整数の合計がSとなる方法がない場合
  if (!dp[N][S])
  {
    cout << -1 << endl;
    return 0;
  }

  vector<int> ans;
  int total = S;
  for (int i = N; i > 0; --i)
  {
    if (dp[i - 1][total])
    {
      continue;
    }
    ans.push_back(i);
    total -= A[i];
  }

  sort(ans.begin(), ans.end());
  cout << (int)ans.size() << endl;
  for (int i = 0; i < (int)ans.size(); i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}