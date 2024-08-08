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
  }
  ll ans = 0, cnt = 0;
  sort(A.begin(), A.end());
  for (int i = 0; i < N; i++)
  {
    ans += A[i] * (N - 1);
  }

  int j = N;
  for (int i = 0; i < N; i++)
  {
    j = max(j, i + 1);
    while (A[i] + A[j - 1] >= wari && j - 1 > i)
    {
      --j;
    }
    cnt += N - j;
  }

  cout << ans - cnt * wari << endl;
  return 0;
}