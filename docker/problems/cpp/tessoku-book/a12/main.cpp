#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

ll printPapers(vector<ll> a, int sec)
{
  ll papers = 0;
  for (int i = 0; i < (int)a.size(); i++)
  {
    papers += sec / a[i];
  }
  return papers;
}

int main()
{
  int N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  ll l = 0, r = 1'000'000'000;
  while (l < r)
  {
    ll mid = (l + r) / 2;
    if (printPapers(A, mid) < K)
    {
      l = mid + 1;
    }
    else if (printPapers(A, mid) >= K)
    {
      r = mid;
    }
  }
  cout << l << endl;
  return 0;
}