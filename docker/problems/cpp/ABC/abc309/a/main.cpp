#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int A, B;
  cin >> A >> B;
  if (
      (A == 1 && B == 2) ||
      (A == 2 && B == 3) ||
      (A == 4 && B == 5) ||
      (A == 5 && B == 6) ||
      (A == 7 && B == 8) ||
      (A == 8 && B == 9))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}