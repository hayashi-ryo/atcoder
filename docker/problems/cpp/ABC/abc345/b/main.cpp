#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll X;
  cin >> X;
  if ((X + 9) < 0 and (X + 9) % 10 != 0)
  {
    cout << (X + 9) / 10 - 1 << endl;
  }
  else
  {
    cout << (X + 9) / 10 << endl;
  }
  return 0;
}