#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  vector<int> A(64);
  rep(i, 64) cin >> A[i];

  unsigned long long ans = 0;
  for (int i = 0; i < 64; i++)
  {
    ans += (1LL << i) * A[i];
  }

  cout << ans << endl;
  return 0;
}