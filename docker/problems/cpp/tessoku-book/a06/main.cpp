#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N), L(Q), R(Q), sumA(N, 0);

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    if (i != 0)
    {
      sumA[i] = sumA[i - 1] + A[i];
    }
    else
    {
      sumA[i] = A[i];
    }
  }

  for (int i = 0; i < Q; i++)
  {
    cin >> L[i] >> R[i];
    L[i]--;
    R[i]--;
  }

  for (int i = 0; i < Q; i++)
  {
    cout << sumA[R[i]] - sumA[L[i] - 1] << endl;
  }

  return 0;
}