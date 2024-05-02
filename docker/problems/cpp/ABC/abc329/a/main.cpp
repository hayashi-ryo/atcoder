#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  string S;
  cin >> S;

  // 処理
  string ans = "";
  for (int i = 0; i < S.size(); ++i)
  {
    ans += S[i];
    ans += " ";
  }
  ans.erase(ans.size() - 1, 1);

  // 出力
  cout << ans << endl;

  return 0;
}