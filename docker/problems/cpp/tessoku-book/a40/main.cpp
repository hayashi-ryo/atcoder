#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  vector<ll> cnt(109, 0);
  rep(i, N) cnt[A[i]]++;

  ll ans = 0;
  for (int i = 1; i <= 100; i++)
  {
    ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
  }

  cout << ans << endl;
  return 0;
}