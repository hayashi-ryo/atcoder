#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int B, G;
  cin >> B >> G;
  // 処理
  string ans = "";
  if (B > G)
  {
    ans = "Bat";
  }
  else
  {
    ans = "Glove";
  }
  // 出力
  cout << ans << endl;
  return 0;
}