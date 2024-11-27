#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll A, B;
  cin >> A >> B;

  cout << A / gcd(A, B) * B << endl;
  return 0;
}