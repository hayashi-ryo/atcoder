#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  map<string, int> ans;
  for (int i = 0; i < S.length(); i++)
  {
    for (int j = 1; j + i - 1 < S.length(); j++)
    {
      ans[S.substr(i, j)]++;
    }
  }

  int ansnum = 0;
  for (auto i = ans.begin(); i != ans.end(); ++i)
  {
    if (i->second > 0)
    {
      ansnum++;
    }
  }
  cout << ansnum << endl;
  return 0;
}