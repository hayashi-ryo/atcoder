#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  vector<ll> XY(6);
  for (int i = 0; i < 6; i++)
  {
    cin >> XY[i];
    XY[i] += 1000;
  }

  ll AB2, BC2, CA2;
  AB2 = (XY[0] - XY[2]) * (XY[0] - XY[2]) + (XY[1] - XY[3]) * (XY[1] - XY[3]);
  BC2 = (XY[2] - XY[4]) * (XY[2] - XY[4]) + (XY[3] - XY[5]) * (XY[3] - XY[5]);
  CA2 = (XY[4] - XY[0]) * (XY[4] - XY[0]) + (XY[5] - XY[1]) * (XY[5] - XY[1]);

  if (AB2 == BC2 + CA2 || BC2 == CA2 + AB2 || CA2 == AB2 + BC2)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}