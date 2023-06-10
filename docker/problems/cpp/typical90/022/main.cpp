#include <bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b)
{
  if (a % b == 0)
    return b;

  return gcd(b, a % b);
}

int main()
{
  long long a, b, c;
  cin >> a >> b >> c;
  long long g = __gcd(c, __gcd(a, b));
  long long ans = a / g - 1 + b / g - 1 + c / g - 1;
  cout << ans << endl;
}