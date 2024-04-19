#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  vector<int> alphabet(26, 0);
  for (auto c : S)
  {
    alphabet[c - 'a']++;
  }

  vector<int> num(S.length() + 1);
  for (int i = 0; i < 26; ++i)
  {
    ++num[alphabet[i]];
  }
  string ans = "Yes";
  for (int i = 1; i < num.size(); ++i)
  {
    if ((num[i] != 0) && (num[i] != 2))
    {
      ans = "No";
    }
  }

  cout << ans << endl;

  return 0;
}