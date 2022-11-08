#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 998244353;
int main()
{
  ll A, B, C, D, E, F;
  cin >> A >> B >> C >> D >> E >> F;
  ll x, y;
  x = ((A % mod) * (B % mod)) % mod;
  x = (x * (C % mod)) % mod;
  y = ((D % mod) * (E % mod)) % mod;
  y = (y * (F % mod)) % mod;
  ll ans = (x + mod - y) % mod;
  cout << ans << endl;
}