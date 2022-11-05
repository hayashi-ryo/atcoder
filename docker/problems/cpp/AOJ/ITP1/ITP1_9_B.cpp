#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  while (1)
  {
    string s;
    int m;
    cin >> s >> m;
    if (s == "-")
    {
      break;
    }
    for (int i = 0; i < m; i++)
    {
      string shuffle = "";
      int h;
      cin >> h;
      shuffle = s.substr(h) + s.substr(0, h);
      s = shuffle;
    }
    cout << s << endl;
  }
}