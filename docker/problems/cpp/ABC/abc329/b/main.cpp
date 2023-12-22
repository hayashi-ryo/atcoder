#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N;
  cin >> N;
  vector<int> a(N);

  // 処理
  rep(i, N) cin >> a[i];
  sort(a.begin(), a.end());
  int ans = a[N - 1];
  for (int i = N - 1; i >= 0; --i)
  {
    if (ans != a[i])
    {
      ans = a[i];
      break;
    }
  }

  // 処理
  cout << ans << endl;
  return 0;
}