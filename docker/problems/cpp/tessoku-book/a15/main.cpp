#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), X(N), ans;
  rep(i, N) cin >> A[i], X[i] = A[i];
  sort(X.begin(), X.end());
  X.erase(unique(X.begin(), X.end()), X.end());

  for (int i = 0; i < N; i++)
  {
    auto it = lower_bound(X.begin(), X.end(), A[i]) - X.begin();
    ans.push_back(it + 1);
  }

  for (int i = 0; i < N; i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }

  cout << endl;

  return 0;
}