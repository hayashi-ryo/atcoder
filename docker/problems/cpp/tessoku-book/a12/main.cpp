#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

ll printer(int sec, const vector<int> &A)
{
  ll res = 0;
  for (auto a : A)
  {
    res += sec / a;
  }
  return res;
}
int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  // 二分探索
  int l = 0, r = 1'000'000'000;
  while (l < r)
  {
    ll mid = (l + r) / 2;
    ll papers = printer(mid, A);
    if (papers < K)
    {
      l = mid + 1;
    }
    else
    {
      r = mid;
    }
  }
  cout << l << endl;
  return 0;
}