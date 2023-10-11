#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string stringDivision[4] = {"dream", "dreamer", "erase", "eraser"};

int main(void)
{
  string s;
  cin >> s;
  bool flag = true;
  reverse(s.begin(), s.end());
  for (int i = 0; i < 4; i++)
  {
    reverse(stringDivision[i].begin(), stringDivision[i].end());
  }

  for (int i = 0; i < s.size();)
  {
    bool div = false;
    for (int j = 0; j < 4; j++)
    {
      string d = stringDivision[j];
      if (s.substr(i, d.size()) == d)
      {
        div = true;
        i += d.size();
      }
    }
    if (!div)
    {
      flag = false;
      break;
    }
  }

  if (flag)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}