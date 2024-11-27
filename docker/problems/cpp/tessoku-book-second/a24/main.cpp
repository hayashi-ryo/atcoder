#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, LEN = 0;
  cin >> N;
  vector<int> A(N + 1), L(N + 1, 10000000), dp(N + 1, 0);
  int ans = 0;
  rep(i, N) cin >> A[i + 1];
  dp[1] = 1;
  L[1] = A[1];
  for (int i = 0; i <= N; i++)
  {
    int pos = lower_bound(L.begin() + 1, L.end(), A[i]) - L.begin() - 1;
    dp[i] = pos;
    L[pos + 1] = min(A[i], L[pos + 1]);
  }

  for (int i = 1; i <= N; i++)
  {
    ans = max(ans, dp[i]);
  }

  cout << ans << endl;
  return 0;
}