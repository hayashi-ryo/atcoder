#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  int cnt = 0;
  for (auto c : S)
  {
    if (c == '|')
    {
      cnt++;
    }
    else if (cnt % 2 == 0)
    {
      cout << c;
    }
  }
  cout << endl;
  return 0;
}