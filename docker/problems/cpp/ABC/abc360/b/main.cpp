#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S, T;
  cin >> S >> T;
  for (int w = 1; w < (int)S.size(); ++w)
  {
    for (int c = 0; c < w; ++c)
    {
      string tmp = "";
      for (int i = c; i < (int)S.size(); i += w)
      {
        tmp += S[i];
      }

      if (tmp == T)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}