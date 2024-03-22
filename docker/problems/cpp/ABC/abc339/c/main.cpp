#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  ll a[N];
  rep(i, N) cin >> a[i];
  ll ans = 0;
  for (int i = 0; i < N; i++)
  {
    ans = ans + a[i];
    if (ans < 0)
    {
      ans = 0;
    }
  }

  cout << ans << endl;
  return 0;
}