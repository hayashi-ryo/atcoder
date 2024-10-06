#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, X;
  cin >> N >> X;

  vector<int> A(N), P(N), B(N), Q(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i] >> P[i] >> B[i] >> Q[i];
  }

  // dp[i][j] は、最初の i 個の工程まで見たときに、j 円以内の予算で達成できる最小の製造能力
  vector<vector<int>> dp(N + 1, vector<int>(X + 1, 0));

  // 各工程 i ごとに dp テーブルを更新
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j <= X; ++j)
    {
      dp[i + 1][j] = dp[i][j]; // 工程 i で機械を買わない場合

      // 機械 Si を何台か買う場合の処理
      for (int k = 0; k * P[i] <= j; ++k)
      {
        int remaining_budget = j - k * P[i];
        int capacity_S = k * A[i];                           // Si を k 台導入した場合の処理能力
        int max_capacity_T = remaining_budget / Q[i] * B[i]; // 予算に応じた Ti の最大導入数
        int total_capacity = capacity_S + max_capacity_T;

        dp[i + 1][j] = max(dp[i + 1][j], min(dp[i][j], total_capacity));
      }
    }
  }

  // 最後の工程まで見たときの予算 X 以内での最大の最小製造能力を出力
  cout << dp[N][X] << endl;

  return 0;
}