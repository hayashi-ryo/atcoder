#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N);
  vector<int> sum(N);
  rep(i, N) cin >> A[i];
  sum[0] = A[0];
  rep(i, N) sum[i] = A[i] + sum[i - 1];

  for (int i = 0; i < Q; i++)
  {
    int L, R;
    cin >> L >> R;
    cout << sum[R - 1] - sum[L - 2] << endl;
  }

  return 0;
}