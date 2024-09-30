#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  ll X, Y;
  cin >> N >> X >> Y;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  sort(A.rbegin(), A.rend());
  sort(B.rbegin(), B.rend());

  ll sumA = 0, sumB = 0;
  for (int i = 0; i < N; i++)
  {
    sumA += A[i];
    sumB += B[i];
    if (X < sumA || Y < sumB)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << N << endl;

  return 0;
}