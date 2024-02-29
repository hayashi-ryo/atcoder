#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  char a, b, c, d;
  cin >> a >> b >> c >> d;
  string ans;
  auto near = [](char x, char y)
  {
    if (x > y)
    {
      swap(x, y);
    }
    return y - x == 1 or y - x == 4;
  };
  if (near(a, b) == near(c, d))
  {
    ans = "Yes";
  }
  else
  {
    ans = "No";
  }
  cout << ans << endl;
  return 0;
}