#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll N;

int main()
{
  cin >> N;
  while (true)
  {
    if (N % 2 == 0)
    {
      N /= 2;
    }
    else
    {
      break;
    }
  }

  while (true)
  {
    if (N % 3 == 0)
    {
      N /= 3;
    }
    else
    {
      break;
    }
  }

  if (N == 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}