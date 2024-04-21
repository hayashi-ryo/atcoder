#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> T(Q);
  vector<int> status(N, 0);
  rep(i, Q) cin >> T[i];
  for (int i = 0; i < Q; i++)
  {
    status[T[i] - 1]++;
  }
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (status[i] % 2 == 0)
    {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}