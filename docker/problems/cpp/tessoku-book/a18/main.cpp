#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, S;
  cin >> N >> S;
  vector<int> a(N + 1);
  for (int i = 1; i <= N; i++)
  {
    cin >> a[i];
  }
  // 配列doの計算
  bool dp[70][11000];
  dp[0][0] = true;
  for (int i = 1; i <= S; i++)
  {
    dp[0][i] = false; // カードを一枚も利用しない場合
  }

  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j <= S; j++)
    {
      if (j < a[i])
      {
        if (dp[i - 1][j] == true)
        {
          dp[i][j] = true;
        }
        else
        {
          dp[i][j] = false;
        }
      }
      if (j >= a[i])
      {
        if (dp[i - 1][j] == true || dp[i - 1][j - a[i]] == true)
        {
          dp[i][j] = true;
        }
        else
        {
          dp[i][j] = false;
        }
      }
    }
  }

  // 出力
  if (dp[N][S] == true)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}