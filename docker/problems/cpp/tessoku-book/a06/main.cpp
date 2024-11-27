#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N), L(Q), R(Q);
  rep(i, N) cin >> A[i];
  for (int i = 0; i < Q; i++)
  {
    cin >> L[i] >> R[i];
    // 0-intended
    L[i]--;
    R[i]--;
  }

  vector<int> sumA(N);
  sumA[0] = A[0];
  for (int i = 1; i < N; i++)
  {
    sumA[i] = sumA[i - 1] + A[i];
  }

  for (int i = 0; i < Q; i++)
  {
    cout << sumA[R[i]] - sumA[L[i] - 1] << endl;
  }

  return 0;
}