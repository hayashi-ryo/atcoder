#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  // dp[i][0]: i番目のモンスターが偶数回目で倒される場合
  // dp[i][1]: i番目のモンスターが奇数回目で倒される場合
  vector<vector<ll>> dp(N + 1, vector<ll>(2, 0));

  // 1番目
  dp[0][0] = 0;
  dp[0][1] = A[0];

  for (int i = 1; i < N; ++i)
  {
    dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + 2 * A[i]); // 偶数回
    dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + A[i]);     // 奇数回
  }

  // N匹全てのモンスターを考慮した場合の最大経験値
  cout << max(dp[N - 1][0], dp[N - 1][1]) << endl;

  return 0;
}