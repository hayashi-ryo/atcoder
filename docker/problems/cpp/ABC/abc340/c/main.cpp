#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

map<ll, ll> m;

ll f(ll N)
{
  if (N == 1)
  {
    return 0;
  }
  if (m.count(N))
  {
    return m[N];
  }
  return m[N] = f(N / 2) + f((N + 1) / 2) + N;
}

int main()
{
  ll N;
  cin >> N;
  cout << f(N) << endl;
  return 0;
}