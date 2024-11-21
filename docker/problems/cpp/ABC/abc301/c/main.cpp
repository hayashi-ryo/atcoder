#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  string S, T;
  cin >> S >> T;

  int atnumS = 0, atnumT = 0;
  for (auto c : S)
    if (c == '@')
      ++atnumS;
  for (auto c : T)
    if (c == '@')
      ++atnumT;

  bool flg = true;
  set<char> atcoder;
  for (auto c : "atcoder")
    atcoder.insert(c);

  for (char c = 'a'; c <= 'z'; ++c)
  {
    int cnumS = 0, cnumT = 0;
    for (auto cs : S)
      if (cs == c)
        ++cnumS;
    for (auto ct : T)
      if (ct == c)
        ++cnumT;

    if (cnumT != cnumS && !atcoder.count(c))
      flg = false;

    if (cnumS > cnumT)
    {
      atnumT -= (cnumS - cnumT);
    }
    else
    {
      atnumS -= (cnumT - cnumS);
    }
  }

  if (atnumT < 0 && atnumS < 0)
  {
    flg = false;
  }
  cout << (flg ? "Yes" : "No") << endl;
  return 0;
}