#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int x, y;
  cin >> x >> y;
  string ans = "";
  if ((x > y) && (x - y) <= 3)
  {
    ans = "Yes";
  }
  else if ((x < y) && (y - x) <= 2)
  {
    ans = "Yes";
  }
  else if (x == y)
  {
    ans = "Yes";
  }
  else
  {
    ans = "No";
  }
  cout << ans << endl;
}