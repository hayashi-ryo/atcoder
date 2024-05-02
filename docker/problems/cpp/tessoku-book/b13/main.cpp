#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // Input
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  // Process
  int ans = 0, leng = 0, sumPrice = 0;
  for (int i = 0; i < N; i++)
  {
    sumPrice = A[i];
    leng = 0;
    while (sumPrice <= K)
    {
      leng++;
      if (i + leng >= N)
      {
        break;
      }
      sumPrice += A[i + leng];
    }
    ans += leng;
  }

  // Output
  cout << ans << endl;
  return 0;
}