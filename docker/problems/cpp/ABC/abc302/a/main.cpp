#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll A, B;
  cin >> A >> B;
  ll ans = 0;
  if (A % B > 0)
  {
    ans = A / B + 1;
  }
  else
  {
    ans = A / B;
  }
  cout << ans << endl;
  return 0;
}