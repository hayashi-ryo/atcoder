#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int main()
{
  int N;
  cin >> N;
  vector<ll> a(N);
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int Q;
  cin >> Q;
  if (N != 1)
  {
    while (Q--)
    {
      ll b;
      cin >> b;
      int it = lower_bound(a.begin(), a.end(), b) - a.begin();
      ll ans = INF;
      if (it < N)
      {
        ans = min(ans, abs(b - a[it]));
      }
      if (it > 0)
      {
        ans = min(ans, abs(b - a[it - 1]));
      }
      cout << ans << endl;
    }
  }
  else
  {
    for (int i = 0; i < Q; i++)
    {
      ll b;
      cin >> b;
      cout << abs(a[0] - b) << endl;
    }
  }
}