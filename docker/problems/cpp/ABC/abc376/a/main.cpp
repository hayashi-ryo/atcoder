#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, C;
  cin >> N >> C;
  vector<int> T(N);
  rep(i, N) cin >> T[i];

  int now = T[0], ans = 1;
  for (int i = 1; i < N; i++)
  {

    if (T[i] - now >= C)
    {
      ans++;
      now = T[i];
    }
  }

  cout << ans << endl;
  return 0;
}