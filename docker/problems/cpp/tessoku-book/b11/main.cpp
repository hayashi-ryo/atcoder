#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  cin >> Q;
  vector<int> X(Q);
  rep(i, Q) cin >> X[i];

  sort(A.begin(), A.end());
  for (int i = 0; i < Q; i++)
  {
    int it = lower_bound(A.begin(), A.end(), X[i]) - A.begin();
    cout << it << endl;
  }

  return 0;
}