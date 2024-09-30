#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  int R, M;
  cin >> S;
  for (int i = 0; i < (int)S.size(); i++)
  {
    if (S[i] == 'R')
    {
      R = i;
    }
    if (S[i] == 'M')
    {
      M = i;
    }
  }

  if (R < M)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}