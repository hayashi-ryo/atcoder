#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  if ((X <= Z && Z <= Y) || (X >= Z && Z >= Y))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}