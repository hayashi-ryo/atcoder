#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N + 1, 0), B(N + 1, 0);
  for (int i = 2; i <= N; i++)
  {
    cin >> A[i];
  }
  for (int i = 3; i <= N; i++)
  {
    cin >> B[i];
  }

  // dp定義
  vector<int> dp(N + 1);
  dp[1] = 0;    // 初期状態
  dp[2] = A[2]; // A_1しかルートが存在しない
  for (int i = 3; i <= N; i++)
  {
    dp[i] = min(
        dp[i - 1] + A[i], // Aルート
        dp[i - 2] + B[i]  // Bルート
    );
  }

  cout << dp[N] << endl;
}