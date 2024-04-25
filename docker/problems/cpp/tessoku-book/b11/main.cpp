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
  sort(A.begin(), A.end());
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    int x;
    cin >> x;
    cout << lower_bound(A.begin(), A.end(), x) - A.begin() << endl;
  }

  return 0;
}