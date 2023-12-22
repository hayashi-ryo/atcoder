#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int T, N;
int main()
{
  ll B;
  cin >> B;
  if (B == 1)
  {
    cout << 1 << endl;
    return 0;
  }

  for (int A = 2; A < 16; ++A)
  {
    int x = 0;
    ll y = B;
    while (y % A == 0)
    {
      x++;
      y /= A;
    }
    if (x == A && y == 1)
    {
      cout << A << endl;
      return 0;
    }
  }

  cout << "-1" << endl;
  return 0;
}