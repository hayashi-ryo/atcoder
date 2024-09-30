#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

const int MOD = 1000000007;
const int MAX = 100000;

long long fac[MAX + 1], inv[MAX + 1], facInv[MAX + 1];

// 素数MODでの階乗とその逆元を事前計算
void preprocess()
{
  fac[0] = fac[1] = 1;
  inv[1] = 1;
  facInv[0] = facInv[1] = 1;

  for (int i = 2; i <= MAX; i++)
  {
    fac[i] = fac[i - 1] * i % MOD;                 // n! % MOD
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD; // フェルマーの小定理を用いて逆元計算
    facInv[i] = facInv[i - 1] * inv[i] % MOD;      // n!の逆元を累積計算
  }
}

// nCr % MOD を計算
long long nCr(int n, int r)
{
  if (r > n)
    return 0;
  return fac[n] * facInv[r] % MOD * facInv[n - r] % MOD;
}

int main()
{
  int n, r;
  cin >> n >> r;

  // 階乗の事前計算
  preprocess();

  // nCrの計算と出力
  cout << nCr(n, r) << endl;

  return 0;
}