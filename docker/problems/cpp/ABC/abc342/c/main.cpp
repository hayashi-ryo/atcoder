#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  string S;
  cin >> N >> S >> Q;

  string from, to;
  from = to = "abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < Q; i++)
  {
    char c, d;
    cin >> c >> d;
    for (auto &&m : to)
    {
      if (m == c)
      {
        m = d;
      }
    }
  }

  for (int i = 0; i < S.length(); i++)
  {
    for (int j = 0; j < from.length(); j++)
    {
      if (S[i] == from[j])
      {
        cout << to[j];
        break;
      }
    }
  }
  cout << endl;
  return 0;
}