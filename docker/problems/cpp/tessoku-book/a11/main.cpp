#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  auto it = lower_bound(A.begin(), A.end(), X) - A.begin();
  cout << it + 1 << endl; // 1-indexに変更
  return 0;
}