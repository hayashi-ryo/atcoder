#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  sort(A.begin(), A.end());
  ll ans = 1'000'000'000;

  for (int i = 0; i <= K; i++)
  {
    ll maxB = A[N - 1 - (K - i)];
    ll minB = A[i];

    ans = min(ans, maxB - minB);
  }

  cout << ans << endl;
  return 0;
}