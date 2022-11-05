#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int S;
  cin >> S;
  int hour = 0, minite = 0, second = 0;
  hour = S / 3600;
  S %= 3600;
  minite = S / 60;
  S %= 60;
  second = S;
  string ans = to_string(hour) + ":" + to_string(minite) + ":" + to_string(second);
  cout << ans << endl;
}
