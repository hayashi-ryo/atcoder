#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

const int MAXDEF = 1'000'000'000;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(M, vector<int>(N));
  vector<int> dp(1 << N, MAXDEF); // dp配列を1次元に変更
  rep(i, M)
  {
    rep(j, N)
    {
      cin >> A[i][j];
    }
  }

  dp[0] = 0;
  for (int i = 0; i < M; i++)
  {
    int mask = 0;
    for (int j = 0; j < N; j++)
    {
      if (A[i][j] == 1)
      {
        mask |= (1 << j);
      }
    }

    for (int j = 0; j < (1 << N); j++)
    {
      dp[j | mask] = min(dp[j | mask], dp[j] + 1);
    }
  }

  if (dp[(1 << N) - 1] == MAXDEF)
  {
    cout << "-1" << endl;
  }
  else
  {
    cout << dp[(1 << N) - 1] << endl;
  }
  return 0;
}
