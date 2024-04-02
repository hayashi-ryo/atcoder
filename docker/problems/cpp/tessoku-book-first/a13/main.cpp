#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> a(N + 1);
  for (int i = 1; i <= N; i++)
  {
    cin >> a[i];
  }

  // しゃくとり方
  vector<int> r(N + 1);
  for (int i = 1; i <= N; i++)
  {
    // スタート位置を決める
    if (i == 1)
    {
      r[i] = 1;
    }
    else
    {
      r[i] = r[i - 1];
    }

    // 増やしていく
    while (r[i] < N && a[r[i] + 1] - a[i] <= K)
    {
      r[i]++;
    }
  }

  // 出力
  ll ans = 0;
  for (int i = 1; i < N; i++)
  {
    ans += r[i] - i;
  }
  cout << ans << endl;
  return 0;
}
