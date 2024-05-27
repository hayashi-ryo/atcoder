#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int A, B;
  cin >> A >> B;
  if (A != B)
  {
    cout << 6 - A - B << endl;
  }
  else
  {
    cout << -1 << endl;
  }
  return 0;
}