#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int a, b;
  cin >> a >> b;
  string ans = "";
  if ((a % 2) == 0 || (b % 2) == 0)
  {
    ans = "Even";
  }
  else
  {
    ans = "Odd";
  }

  cout << ans << endl;
}