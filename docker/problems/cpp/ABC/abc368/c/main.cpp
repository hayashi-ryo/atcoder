#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N;
  cin >> N;
  vector<ll> H(N);
  rep(i, N) cin >> H[i];
  ll T = 0; //
  for (int i = 0; i < N; i++)
  {
    int turn = H[i] / 5;
    T += turn * 3;
    H[i] -= turn * 5;

    while (H[i] > 0)
    {
      ++T;
      if (T % 3 == 0)
      {
        H[i] -= 3;
      }
      else
      {
        --H[i];
      }
    }
  }
  cout << T << endl;
  return 0;
}