#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  ll ans = 0;
  int j = 1;
  for (int i = 0; i < N; i++)
  {
    while (j < N && A[j] - A[i] <= K)
    {
      ++j;
    }
    ans += (j - i) - 1;
  }

  cout << ans << endl;
  return 0;
}