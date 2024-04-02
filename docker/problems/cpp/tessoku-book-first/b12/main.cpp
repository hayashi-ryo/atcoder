#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  double n;
  cin >> n;
  double ok = 100;
  double ng = 0;
  while (abs(ok - ng) > 0.0001)
  {
    double mid = (ok + ng) / 2;
    if (mid * mid * mid + mid >= n)
      ok = mid;
    else
      ng = mid;
  }
  cout << fixed << setprecision(5);
  cout << ok << endl;
  return 0;
}