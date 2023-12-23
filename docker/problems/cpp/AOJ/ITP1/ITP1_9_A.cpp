#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string w;
  cin >> w;

  int ans = 0;
  while (1)
  {
    string s;
    cin >> s;
    if (s == "END_OF_TEXT")
    {
      break;
    }
    if (strcasecmp(s.c_str(), w.c_str()) == 0)
    {
      ans++;
    }
  }
  cout << ans << endl;
}