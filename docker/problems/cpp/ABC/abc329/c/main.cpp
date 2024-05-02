#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N;
  string S;
  cin >> N >> S;

  // 処理
  // 方針: 文字ごとの部分文字列の数え上げていく
  // やっていることは基本的にランレングス圧縮と同じ
  vector<int> mx(26); // アルファベットを文字ごとに数える配列
  int l = 0;
  while (l < N)
  {
    int r = l + 1;
    while (r < N && S[l] == S[r])
    {
      ++r;
    }
    int c = S[l] - 'a';
    mx[c] = max(mx[c], r - l);
    l = r;
  }
  // 出力
  int ans = 0;
  rep(i, 26) ans += mx[i];
  cout << ans << endl;
  return 0;
}