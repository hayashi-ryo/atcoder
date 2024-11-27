#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> dp(N, 0);
  vector<vector<int>> G(N);
  for (int i = 1; i < N; i++)
  {
    cin >> A[i], A[i]--;
    G[A[i]].push_back(i);
  }
  for (int i = N - 1; i >= 0; --i)
  {
    for (int j = 0; j < (int)G[i].size(); j++)
    {
      dp[i] += (dp[G[i][j]] + 1);
    }
  }

  for (int i = 0; i < N; i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << dp[i];
  }

  cout << endl;
  return 0;
}