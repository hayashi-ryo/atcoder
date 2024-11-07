#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N;
  vector<int> q(N), r(N);
  rep(i, N) cin >> q[i] >> r[i];
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    int t, d;
    cin >> t >> d;
    t--;
    int b = d / q[t], c = d % q[t];
    if (c <= r[t])
    {
      cout << b * q[t] + r[t] << endl;
    }
    else
    {
      cout << (b + 1) * q[t] + r[t] << endl;
    }
  }

  return 0;
}