#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool check(ll x, int k, vector<int> a)
{
  ll sum = 0;
  for (int i = 0; i < a.size(); i++)
  {
    sum += x / a[i];
  }
  if (sum >= k)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  // 入力
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  // 出力
  ll l = 0, r = 1'000'000'000;
  while (l < r)
  {
    ll Mid = (l + r) / 2;
    bool ans = check(Mid, K, A);
    if (ans)
    {
      r = Mid;
    }
    else
    {
      l = Mid + 1;
    }
  }
  cout << l << endl;
  return 0;
}