#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

const ll MOD = 1000'000'007;

int main()
{
  ll a, b;
  cin >> a >> b;
  ll ans = 1;
  for (int i = 0; i < 30; ++i)
  {
    int wari = (1 << i);
    if ((b / wari) % 2 == 1)
    {
      ans = (ans * a) % MOD;
    }
    a = (a * a) % MOD;
  }

  cout << ans << endl;
  return 0;
}