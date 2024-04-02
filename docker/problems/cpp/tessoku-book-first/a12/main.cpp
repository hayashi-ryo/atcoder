#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

ll N, K;

ll check(ll x, vector<ll> a)
{
  ll sum = 0;
  for (int i = 0; i < N; ++i)
  {
    sum += x / a[i];
  }
  if (K <= sum)
  {
    return true;
  }
  return false;
}

int main()
{
  // 入力
  cin >> N >> K;
  vector<ll> a(N);
  rep(i, N) cin >> a[i];

  // 出力
  ll left = 1, right = 1000000000;
  while (left < right)
  {
    ll mid = (left + right) / 2;
    bool ans = check(mid, a);
    if (ans == false)
    {
      left = mid + 1;
    }
    else
    {
      right = mid;
    }
  }

  cout << left << endl;
  return 0;
}