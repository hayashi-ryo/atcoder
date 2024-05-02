#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  double N;
  cin >> N;
  double l = 0, r = 100;
  while (abs(r - l) > 0.0001)
  {
    double mid = (l + r) / 2;
    if (mid * mid * mid + mid >= N)
    {
      r = mid;
    }
    else
    {
      l = mid;
    }
  }
  cout << fixed << setprecision(5);
  cout << r << endl;
  return 0;
}