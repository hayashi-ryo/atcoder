#include <bits/stdc++.h>
using namespace std;
int main()
{
  string S;
  string T;
  cin >> S >> T;
  int sSIZE = S.size();
  int tSIZE = T.size();
  bool ans = false;
  if (sSIZE > tSIZE) // SがTより長い場合
  {
    for (int i = 0; i < sSIZE - tSIZE; i++)
    {
      if (S.substr(i, tSIZE) == T)
      {
        ans = true;
        break;
      }
    }
  }
  else if (sSIZE == tSIZE) // SがTと同じ長さの場合
  {
    if (S == T)
    {
      ans = true;
    }
  }
  // SよりTが長い場合は考慮不要

  if (ans)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}