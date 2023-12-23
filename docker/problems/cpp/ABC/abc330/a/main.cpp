#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N, L;
  cin >> N >> L;
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  // 処理
  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    if (a[i] >= L)
      ++ans;
  }

  // 出力
  cout << ans << endl;
  return 0;
}