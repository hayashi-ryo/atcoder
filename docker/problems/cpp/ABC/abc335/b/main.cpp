#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  for (int x = 0; x <= N; ++x)
  {
    for (int y = 0; y <= N; ++y)
    {
      for (int z = 0; z <= N; ++z)
      {
        if (x + y + z <= N)
        {
          cout << x << " " << y << " " << z << endl;
        }
        else
        {
          break;
        }
      }
    }
  }
  return 0;
}