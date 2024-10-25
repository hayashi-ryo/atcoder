#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int D, N;
  cin >> D >> N;
  vector<int> L(N, 24), R(N, 24), H(N, 24);
  for (int i = 0; i < N; i++)
  {
    int l, r, h;
    cin >> l >> r >> h;
    l--;
    r--;
    L[i] = l;
    R[i] = r;
    H[i] = h;
  }

  vector<int> LIM(D, 24);
  for (int i = 0; i < N; i++)
  {
    for (int j = L[i]; j <= R[i]; j++)
    {
      LIM[j] = min(LIM[j], H[i]);
    }
  }

  int ans = 0;
  for (int lim : LIM)
  {
    ans += lim;
  }

  cout << ans << endl;
  return 0;
}