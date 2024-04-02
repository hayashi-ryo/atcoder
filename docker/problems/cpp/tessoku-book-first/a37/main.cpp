#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N, M, B;
  cin >> N >> M >> B;
  ll A[N], C[M];
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> C[i];
  ll ans = 0;
  rep(i, N) ans += A[i] * M;
  rep(i, M) ans += C[i] * N;
  ans += B * N * M;
  cout << ans << endl;
  return 0;
}