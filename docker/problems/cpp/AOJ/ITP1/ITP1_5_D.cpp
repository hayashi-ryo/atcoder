#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  for (int i = 1; i < N + 1; i++)
  {
    if (i % 3 == 0)
    {
      cout << " " << i;
    }
    else if (i % 10 == 3)
    {
      cout << " " << i;
    }
    else
    {
      int x = i;
      while (x /= 10)
      {
        if (x % 10 == 3)
        {
          cout << " " << i;
          break;
        }
      }
    }
  }
  cout << endl;
}