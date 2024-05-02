#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool palindromeCheck(ll x)
{
  string from = to_string(x);
  string to = from;
  reverse(to.begin(), to.end());
  return from == to;
}
int main()
{
  ll N;
  cin >> N;
  ll ans = 0;
  for (ll i = 1; i * i * i <= N; i++)
  {
    if (palindromeCheck(i * i * i))
    {
      ans = i * i * i;
    }
  }
  cout << ans << endl;
  return 0;
}