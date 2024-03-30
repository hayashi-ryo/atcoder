#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N;
  cin >> N;
  ll ans = 0;
  // 3で割り切れる個数
  ans += (N / 3);
  // 5で割り切れる個数
  ans += (N / 5);
  // 3と5で割り切れる個数
  ans -= (N / 15);

  cout << ans << endl;
  return 0;
}