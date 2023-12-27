#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

ll floor(ll x, ll m)
{
  ll r = (x % m + m) % m;
  return (x - r) / m;
}

int main()
{
  // 入力
  ll A, M, L, R;
  cin >> A >> M >> L >> R;

  // 処理
  /*
  1. LとRからAを引いて、座標がMの倍数の地点に立っているようにする
  2. 座標がL未満の地点にあるもののうち、一番東にあるものをl
     座標がR未満の地点にあるもののうち、一番東にあるものをr とすると、答えはr-lになる
  3. それぞれの値を計算する
  */

  L -= A;
  R -= A;

  // 出力
  cout << floor(R, M) - floor(L - 1, M) << endl;
  return 0;
}