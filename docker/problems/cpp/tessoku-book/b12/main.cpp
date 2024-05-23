#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

double xCalculaton(double x)
{
  return x + x * x * x;
}

int main()
{
  double N;
  cin >> N;
  double l = 0, r = 100;
  while (abs(r - l) > 0.0001)
  {
    double mid = (l + r) / 2;
    if (xCalculaton(mid) < N)
    {
      l = mid;
    }
    else if (xCalculaton(mid) >= N)
    {
      r = mid;
    }
  }
  cout << fixed << setprecision(5);
  cout << l << endl;
  return 0;
}