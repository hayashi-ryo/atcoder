#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1'000'000'007;

// 素数 p に対して、a の逆元を計算する (フェルマーの小定理を使用)
ll mod_inv(ll a, ll p)
{
  ll res = 1, exp = p - 2;
  while (exp > 0)
  {
    if (exp % 2 == 1)
    {
      res = (res * a) % p;
    }
    a = (a * a) % p;
    exp /= 2;
  }
  return res;
}

// 階乗とその逆元を事前計算する
vector<ll> fact, inv_fact;

void compute_factorials(int n, ll mod)
{
  fact.resize(n + 1);
  inv_fact.resize(n + 1);

  fact[0] = 1;
  for (int i = 1; i <= n; ++i)
  {
    fact[i] = fact[i - 1] * i % mod;
  }

  // 階乗の逆元を事前計算
  inv_fact[n] = mod_inv(fact[n], mod);
  for (int i = n - 1; i >= 0; --i)
  {
    inv_fact[i] = inv_fact[i + 1] * (i + 1) % mod;
  }
}

// 組み合わせ nCk を計算する
ll comb(ll n, ll k, ll mod)
{
  if (n < k || k < 0)
    return 0;
  return fact[n] * inv_fact[k] % mod * inv_fact[n - k] % mod;
}

int main()
{
  ll H, W;
  cin >> H >> W;

  ll n = H + W - 2;
  ll k = H - 1;

  // 階乗を事前計算
  compute_factorials(n, MOD);

  // 組み合わせ nCk を計算して出力
  cout << comb(n, k, MOD) << endl;

  return 0;
}
