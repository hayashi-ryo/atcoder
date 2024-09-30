#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  ll ans = 0;
  ll l = 0;

  while (l < N)
  {
    ll r = l + 1;
    if (r == N)
    {
      ++ans;
      break;
    }

    ll d = A[r] - A[l];
    while (r + 1 < N && A[r + 1] - A[r] == d)
    {
      ++r;
    }

    ll len = r - l + 1;
    ans += (len * (len + 1)) / 2;
    if (l != 0)
    {
      --ans;
    }
    if (r == N - 1)
    {
      break;
    }
    l = r;
  }
  cout << ans << endl;
  return 0;
}