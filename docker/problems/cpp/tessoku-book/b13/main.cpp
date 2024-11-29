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

  int ans = 0, j = 0, totalCost = 0;
  for (int i = 0; i < N; i++)
  {
    if (i != 0)
    {
      totalCost -= A[i - 1];
    }
    while (j < N && totalCost + A[j] <= K)
    {
      totalCost += A[j];
      ++j;
    }
    ans += j - i;
  }

  cout << ans << endl;
  return 0;
}