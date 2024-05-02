#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  string ans = "Yes";
  for (int i = 0; i < S.length(); i++)
  {
    if (i == 0)
    {
      if (S[i] != '<')
      {
        ans = "No";
        break;
      }
    }
    else if (i == S.length() - 1)
    {
      if (S[i] != '>')
      {
        ans = "No";
        break;
      }
    }
    else
    {
      if (S[i] != '=')
      {
        ans = "No";
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}