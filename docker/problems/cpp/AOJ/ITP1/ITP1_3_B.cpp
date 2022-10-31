#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i = 1;
  bool flag = true;
  while (flag)
  {
    int test;
    cin >> test;
    if (test != 0)
    {
      cout << "Case " << i << ": " << test << endl;
    }
    else
    {
      flag = false;
    }
    i++;
  }
}