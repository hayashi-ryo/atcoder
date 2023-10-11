#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int ans = 0;
  while (true)
  {
    bool existOdd = false;
    for (int i = 0; i < n; i++)
    {
      if ((a[i] % 2) != 0)
      {
        existOdd = true;
      }
    }

    if (existOdd)
    {
      break;
    }
    for (int i = 0; i < n; i++)
    {
      a[i] /= 2;
    }
    ans++;
  }
  cout << ans << endl;
}