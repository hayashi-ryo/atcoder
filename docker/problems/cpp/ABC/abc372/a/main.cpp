#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S, ans;
  cin >> S;
  for (auto c : S)
  {
    if (c != '.')
    {
      ans += c;
    }
  }
  cout << ans << endl;
  return 0;
}