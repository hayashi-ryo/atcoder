#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  string S;
  cin >> S;

  string ans = "Yes";
  // 文字列長チェック
  if (S.length() % 2 != 0)
  {
    ans = "No";
  }

  // 2i-1と2i文字目が等しいかチェック
  for (int i = 0; i < (int)S.length() / 2; i++)
  {
    if (S[2 * i] != S[2 * i + 1])
    {
      ans = "No";
    }
  }

  // 文字の登場頻度チェック
  vector<int> cnt(26, 0);
  for (int i = 0; i < (int)S.length(); i++)
  {
    cnt[S[i] - 'a']++;
  }
  for (auto c : cnt)
  {
    if (c != 0 && c != 2)
    {
      ans = "No";
    }
  }

  cout << ans << endl;
  return 0;
}