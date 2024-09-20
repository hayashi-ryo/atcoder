#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int A, B;
  cin >> A >> B;
  while (A >= 1 && B >= 1)
  {
    if (A >= B)
    {
      A = A % B;
    }
    else
    {
      B = B % A;
    }
  }
  if (A == 0)
  {
    cout << B << endl;
  }
  else
  {
    cout << A << endl;
  }
  return 0;
}