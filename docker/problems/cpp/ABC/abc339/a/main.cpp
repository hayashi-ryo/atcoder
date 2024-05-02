#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  string ans = "";
  for (int i = 0; i < S.length(); i++)
  {
    if (S[i] != '.')
    {
      ans += S[i];
    }
    else
    {
      ans = "";
    }
  }
  cout << ans << endl;
  return 0;
}