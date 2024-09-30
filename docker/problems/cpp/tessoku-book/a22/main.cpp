#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  rep(i, N - 1) cin >> A[i + 1];
  rep(i, N - 1) cin >> B[i + 1];

  vector<int> dp(N, 0);
  for (int i = 1; i <= N - 1; ++i)
  {
    dp[A[i]] = max(dp[A[i]], dp[i] + 100);
    dp[B[i]] = max(dp[B[i]], dp[i] + 150);
  }

  cout << dp[N] << endl;
  return 0;
}