#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  multiset<int> a;
  rep(i, N) cin >> A[i];
  rep(i, N) a.insert(A[i]);
  rep(i, M) cin >> B[i];

  ll totalCost = 0;
  for (int i = 0; i < M; i++)
  {
    auto it = a.lower_bound(B[i]);
    if (it == a.end())
    {
      cout << -1 << endl;
      return 0;
    }
    totalCost += *it;
    a.erase(it);
  }

  cout << totalCost << endl;
  return 0;
}