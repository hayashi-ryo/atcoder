#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll Sx, Sy, Tx, Ty;
  cin >> Sx >> Sy >> Tx >> Ty;

  if ((Sx + Sy) % 2 == 1)
  {
    --Sx;
  }
  if ((Tx + Ty) % 2 == 1)
  {
    --Tx;
  }
  ll ans = 0;
  ans = (abs(Sy - Ty) + max(abs(Sx - Tx), abs(Sy - Ty))) / 2;

  cout << ans << endl;
  return 0;
}