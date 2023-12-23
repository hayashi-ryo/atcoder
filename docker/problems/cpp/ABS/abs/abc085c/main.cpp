#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n, y;
  cin >> n >> y;

  for (int i = 0; i < n + 1; i++)
  {
    int sum = 0;
    for (int j = 0; j < n + 1 - i; j++)
    {
      sum = 10000 * i + 5000 * j + 1000 * (n - i - j);
      if (sum == y)
      {
        cout << i << " " << j << " "
             << (n - i - j) << endl;
        return 0;
      }
      else if (sum > y)
      {
        break;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}