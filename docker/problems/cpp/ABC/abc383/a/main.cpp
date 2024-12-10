#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> T(N), V(N);
  rep(i, N) cin >> T[i] >> V[i];

  int ans = V[0], t = T[0];
  for (int i = 1; i < N; i++)
  {
    if (T[i] - t > ans)
    {
      ans = V[i];
    }
    else
    {
      ans -= (T[i] - t);
      ans += V[i];
    }
    t = T[i];
  }

  cout << ans << endl;
  return 0;
}