#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  cout << A[N - 1] + B[N - 1] << endl;
  return 0;
}