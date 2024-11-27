#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N, M, B;
  cin >> N >> M >> B;
  vector<ll> A(N);
  vector<ll> C(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> C[i];

  ll ans = 0;
  rep(i, N) ans += A[i] * M;
  ans += B * N * M;
  rep(i, M) ans += C[i] * N;

  cout << ans << endl;
  return 0;
}