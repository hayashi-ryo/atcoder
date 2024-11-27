#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

const ll MOD = 1'000'000'007;

int main()
{
  ll A, B;
  cin >> A >> B;

  ll result = 1;
  ll base = A % MOD;

  while (B > 0)
  {
    if (B % 2 == 1)
    {
      result = (result * base) % MOD;
    }
    base = (base * base) % MOD;
    B /= 2;
  }

  cout << result << endl;
  return 0;
}