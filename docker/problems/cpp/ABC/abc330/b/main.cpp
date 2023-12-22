#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  // 処理
  vector<int> ans(N);
  for (int i = 0; i < N; i++)
  {
    ans[i] = min(max(L, a[i]), R);
  }

  // 出力
  for (int i = 0; i < N; i++)
  {
    cout << ans[i];
    if (i != N - 1)
    {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}