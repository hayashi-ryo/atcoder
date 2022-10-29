#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  string ans;
  cin >> a >> b;
  if (a % 2 == 0 || b % 2 == 0)
  {
    ans = "Even";
  }
  else
  {
    ans = "Odd";
  }
  cout << ans << endl;
}