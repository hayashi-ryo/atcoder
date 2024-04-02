#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

ll M = 1000000007;

ll Power(ll a, ll b, ll m)
{
  ll p = a, ans = 1;
  for (int i = 0; i < 30; i++)
  {
    int wari = (1 << i);
    if ((b / wari) % 2 == 1)
    {
      ans = (ans * p) % m;
    }
    p = (p * p) % m;
  }
  return ans;
}
ll div(ll a, ll b, ll m)
{
  return (a * Power(b, m - 2, m)) % m;
}

int main()
{
  ll n, r;
  cin >> n >> r;
  // 分子を計算する
  ll a = 1;
  for (int i = 1; i <= n; i++)
  {
    a = (a * i) % M;
  }

  // 分母を計算する
  ll b = 1;
  for (int i = 1; i <= r; i++)
  {
    b = (b * i) % M;
  }
  for (int i = 1; i <= n - r; i++)
  {
    b = (b * i) % M;
  }
  cout << div(a, b, M) << endl;
  return 0;
}