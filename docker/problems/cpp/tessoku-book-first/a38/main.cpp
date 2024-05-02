#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int D, N;
  cin >> D >> N;
  int time[10009];

  int L[10009], R[10009], H[10009];
  for (int i = 1; i <= N; i++)
  {
    cin >> L[i] >> R[i] >> H[i];
  }
  for (int i = 1; i <= D; i++)
  {
    time[i] = 24;
  }

  for (int i = 1; i <= N; i++)
  {
    // int l = L[i];
    // int r = R[i];
    for (int j = L[i]; j <= R[i]; j++)
    {
      time[j] = min(time[j], H[i]);
    }
  }

  ll ans = 0;
  for (int i = 1; i <= D; i++)
  {
    ans += time[i];
  }
  cout << ans << endl;
  return 0;
}