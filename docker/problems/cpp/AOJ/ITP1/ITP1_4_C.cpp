#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  while (1)
  {
    int a, b;
    char op;
    cin >> a >> op >> b;
    int ans;
    if (op == '?')
    {
      break;
    }
    else if (op == '+')
    {
      ans = a + b;
    }
    else if (op == '-')
    {
      ans = a - b;
    }
    else if (op == '*')
    {
      ans = a * b;
    }
    else if (op == '/')
    {
      ans = a / b;
    }
    cout << ans << endl;
  }
}