#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N, 0), B(N, 0);
  for (int i = 1; i < N; i++)
  {
    cin >> A[i];
  }
  for (int i = 2; i < N; i++)
  {
    cin >> B[i];
  }

  vector<int> dp(N);
  dp[0] = 0;    // 初期状態
  dp[1] = A[1]; // 部屋1への行き方は初期状態からA1分かかる場合のみ
  for (int i = 2; i < N; i++)
  {
    dp[i] = min(dp[i - 1] + A[i],  // 一つ前の部屋から移動する場合
                dp[i - 2] + B[i]); // 二つ前の部屋から移動する場合
  }

  cout << dp[N - 1] << endl;
}