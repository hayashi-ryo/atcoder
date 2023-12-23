#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int N = 0;
  cin >> N;
  vector<ll> a(N);
  vector<ll> b(N);
  for (int i = 0; i < N; i++)
    cin >> a[i];
  for (int i = 0; i < N; i++)
    cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll ans = 0;
  for (int i = 0; i < N; i++)
    ans += abs(a[i] - b[i]);

  cout << ans << endl;
}