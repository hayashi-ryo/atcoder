#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  string ans = "";
  for (int i = 0; i < (int)s.size(); i++)
  {
    char c = s[i];
    if (islower(c))
    {
      ans += (char)toupper(c);
    }
    else if (isupper(c))
    {
      ans += (char)tolower(c);
    }
    else
    {
      ans += c;
    }
  }
  cout << ans << endl;
  return 0;
}
