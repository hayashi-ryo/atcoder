#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N, H, X;
  cin >> N >> H >> X;
  vector<int> P(N);
  rep(i, N) cin >> P[i];

  // 処理
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (H + P[i] >= X)
    {
      ans = i + 1;
      break;
    }
  }

  // 出力
  cout << ans << endl;

  return 0;
}