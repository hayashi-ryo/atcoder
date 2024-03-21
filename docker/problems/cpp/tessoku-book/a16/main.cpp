#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> b(N);
  vector<int> dp(N);
  for (int i = 1; i < N; i++)
  {
    cin >> a[i];
  }
  for (int i = 2; i < N; i++)
  {
    cin >> b[i];
  }

  // 配列dpの計算
  dp[0] = 0;
  dp[1] = a[1];
  for (int i = 2; i < N; i++)
  {
    dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
  }
  cout << dp[N - 1] << endl;

  return 0;
}