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
  int ans = 0, passenger = 0;
  for (int i = 0; i < N; i++)
  {
    if (passenger == 0)
    {
      passenger += A[i];
      ans++;
    }
    else if (passenger + A[i] <= K)
    {
      passenger += A[i];
    }
    else if (passenger + A[i] > K)
    {
      passenger = A[i];
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}