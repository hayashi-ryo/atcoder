#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
const ll MOD = 998244353;

ll count_popcount(ll N, ll M)
{
  ll result = 0;
  ll bit = 1;

  while (bit <= N)
  {
    ll block_size = bit << 1;
    ll full_blocks = (N + 1) / block_size;
    ll remainder = (N + 1) % block_size;

    ll count_ones_in_full_blocks = full_blocks * (bit & M ? bit : 0);
    ll count_ones_in_remainder = remainder > bit ? remainder - bit : 0;
    count_ones_in_remainder = (bit & M) ? count_ones_in_remainder : 0;

    result = (result + count_ones_in_full_blocks + count_ones_in_remainder) % MOD;
    bit <<= 1;
  }

  return result;
}

int main()
{
  ll N, M;
  cin >> N >> M;

  ll result = count_popcount(N, M);
  cout << result << endl;

  return 0;
}