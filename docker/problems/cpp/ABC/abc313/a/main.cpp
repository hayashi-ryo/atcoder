#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> P(N);
  rep(i, N) cin >> P[i];
  int P0 = P[0];
  sort(P.rbegin(), P.rend());
  int Pmax = P[0], Psecond = P[1];
  if (P0 == Pmax)
  {
    if (Pmax == Psecond)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }
  else
  {
    cout << Pmax - P0 + 1 << endl;
  }
  return 0;
}