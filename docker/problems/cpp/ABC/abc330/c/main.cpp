#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  ll D;
  cin >> D;

  // 処理
  ll ans = D;
  for (ll x = 0; x <= sqrt(D); ++x)
  {
    if (x * x >= D)
    {
      ans = min(ans, x * x - D);
    }
    else
    {
      ll y = sqrt(D - x * x);
      ans = min(ans, abs(x * x + y * y - D));
      ans = min(ans, abs(x * x + (y + 1) * (y + 1) - D));
    }
  }

  // 出力
  cout << ans << endl;
  return 0;
}