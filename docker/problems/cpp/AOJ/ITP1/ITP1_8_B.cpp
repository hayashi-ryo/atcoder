#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sumketa(string s)
{
  int ans = 0;
  for (int i = 0; i < (int)s.size(); i++)
  {
    char c = s[i];
    if (isdigit(c))
    {
      ans += c - '0';
    }
  }
  return ans;
}
int main()
{
  while (1)
  {
    string s = "";
    cin >> s;
    if (s == "0")
      break;
    else
    {
      cout << sumketa(s) << endl;
    }
  }
}