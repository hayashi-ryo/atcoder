#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(3 * N);
  rep(i, 3 * N) cin >> A[i];
  vector<int> g(N + 1, 0), ans;
  for (int i = 0; i < 3 * N; i++)
  {
    g[A[i]]++;
    if (g[A[i]] == 2)
    {
      ans.push_back(A[i]);
    }
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