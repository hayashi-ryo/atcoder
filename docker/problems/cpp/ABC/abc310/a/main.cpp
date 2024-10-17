#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<int> D(N);
  rep(i, N) cin >> D[i];
  int ans = P;
  for (int i = 0; i < N; i++)
  {
    ans = min(ans, Q + D[i]);
  }

  cout << ans << endl;
  return 0;
}