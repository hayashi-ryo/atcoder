#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

const ll MOD = 1'000'000'007;

int main()
{
  int N;
  cin >> N;
  ll ai, a1 = 1, a2 = 1;
  for (int i = 3; i <= N; i++)
  {
    ai = (a1 + a2) % MOD;
    a1 = a2;
    a2 = ai;
  }

  cout << ai << endl;
  return 0;
}