#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S, T;
  cin >> S >> T;
  int Si = 0;
  for (int i = 0; i < T.size(); i++)
  {
    if (S[Si] == T[i])
    {
      if (Si != 0)
      {
        cout << " ";
      }
      cout << i + 1;
      Si++;
    }
  }

  cout << endl;

  return 0;
}