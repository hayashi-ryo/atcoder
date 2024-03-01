#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  if (isupper(S[0]))
  {
    for (int i = 1; i < S.length(); i++)
    {
      if (!islower(S[i]))
      {
        cout << "No" << endl;
        return 0;
      }
    }
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}