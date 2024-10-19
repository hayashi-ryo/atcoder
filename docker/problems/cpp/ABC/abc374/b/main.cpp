#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S, T;
  cin >> S >> T;
  int sizeS = (int)S.size();
  int sizeT = (int)T.size();
  if (S == T)
  {
    cout << 0 << endl;
    return 0;
  }

  if (sizeS <= sizeT)
  {
    for (int i = 0; i < sizeS; i++)
    {
      if (S[i] != T[i])
      {
        cout << i + 1 << endl;
        return 0;
      }
    }
    cout << sizeS + 1 << endl;
  }
  else
  {
    for (int i = 0; i < sizeT; i++)
    {
      if (S[i] != T[i])
      {
        cout << i + 1 << endl;
        return 0;
      }
    }
    cout << sizeT + 1 << endl;
  }
  return 0;
}