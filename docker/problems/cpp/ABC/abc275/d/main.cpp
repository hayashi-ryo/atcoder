#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map<ll, ll> mp;

ll f(ll x)
{
  if (mp[x] != 0)
  {
    return mp[x];
  }
  mp[x] = f(x / 2) + f(x / 3);
  return mp[x];
}
int main()
{
  ll n;
  cin >> n;
  mp[0] = 1;
  cout << f(n) << endl;
}