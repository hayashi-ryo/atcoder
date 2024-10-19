#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;

  vector<int> A(K);
  rep(i, K) cin >> A[i];

  vector<bool> dp(N + 1, false);
  dp[0] = false;

  for (int i = 1; i <= N; ++i)
  {
    for (int j = 0; j < K; ++j)
    {
      if (i >= A[j] && !dp[i - A[j]])
      {
        dp[i] = true; // 相手が負ける状態に遷移できるなら自分は勝てる
        break;
      }
    }
  }

  if (dp[N])
  {
    cout << "First" << endl; // 先手が勝つ
  }
  else
  {
    cout << "Second" << endl; // 後手が勝つ
  }

  return 0;
}