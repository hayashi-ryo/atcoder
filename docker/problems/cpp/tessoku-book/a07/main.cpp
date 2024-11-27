#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int D, N;
  cin >> D >> N;
  vector<int> L(N), R(N), A(D + 1, 0), sumA(D + 1, 0);
  for (int i = 0; i < N; i++)
  {
    cin >> L[i] >> R[i];
    // 0-indented
    L[i]--;
    R[i]--;
    A[L[i]]++;
    A[R[i] + 1]--;
  }

  sumA[0] = A[0];
  for (int i = 1; i < D; i++)
  {
    sumA[i] = sumA[i - 1] + A[i];
  }

  for (int i = 0; i < D; i++)
  {
    cout << sumA[i] << endl;
  }
  return 0;
}