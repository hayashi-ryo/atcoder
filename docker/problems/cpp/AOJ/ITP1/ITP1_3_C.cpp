#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  bool flag = true;
  while (flag)
  {
    int x, y;
    cin >> x >> y;
    if (x == 0 & y == 0)
    {
      flag = false;
    }
    else if (x > y)
    {
      cout << y << " " << x << endl;
    }
    else
    {
      cout << x << " " << y << endl;
    }
  }
}