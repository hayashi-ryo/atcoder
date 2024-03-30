#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N;
  cin >> N;
  ll A[N], cnt[101];
  rep(i, 101) cnt[i] = 0;
  rep(i, N) cin >> A[i];
  for (int i = 0; i < N; i++)
  {
    cnt[A[i]]++;
  }

  ll ans = 0;
  for (int i = 1; i < 101; i++)
  {
    ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
  }
  cout << ans << endl;
  return 0;
}
