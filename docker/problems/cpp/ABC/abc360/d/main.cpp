#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  ll T;
  string S;
  cin >> N >> T >> S;
  vector<ll> X(N), x1, x2;
  rep(i, N) cin >> X[i];
  for (int i = 0; i < N; i++)
  {
    if (S[i] == '1')
    {
      x1.push_back(X[i]);
    }
    else
    {
      x2.push_back(X[i]);
    }
  }

  sort(x1.begin(), x1.end());
  sort(x2.begin(), x2.end());

  int l = 0, r = 0;
  ll ans = 0;

  for (int i = 0; i < (int)x1.size(); i++)
  {
    while (l < (int)x2.size() && x2[l] < x1[i])
    {
      l++;
    }
    while (r < (int)x2.size() && x2[r] - x1[i] <= 2 * T)
    {
      r++;
    }
    ans += r - l;
  }

  cout << ans << endl;
  return 0;
}