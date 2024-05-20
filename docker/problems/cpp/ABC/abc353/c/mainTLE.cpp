#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

const ll wari = 100'000'000;

int main()
{
  int N;
  cin >> N;
  vector<ll> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    if (A[i] >= wari)
    {
      A[i] %= wari;
    }
  }

  ll ans = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      ans += (A[i] + A[j]) % wari;
    }
  }
  cout << ans << endl;
  return 0;
}