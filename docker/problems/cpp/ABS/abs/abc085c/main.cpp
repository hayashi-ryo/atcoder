#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, Y;
  cin >> N >> Y;
  bool flag = false;
  for (int i = N; i > -1; i--)
  {
    if (flag)
      break;
    for (int j = N - i; j > -1; j--)
    {
      if (flag)
        break;
      for (int k = N - (i + j); k > -1; k--)
      {
        if (flag)
          break;
        if (i * 10000 + j * 5000 + k * 1000 == Y and (i + j + k) == N)
        {
          flag = true;
          cout << i << " " << j << " " << k << endl;
          break;
        }
      }
    }
  }
  if (flag != true)
  {
    cout << -1 << " " << -1 << " " << -1 << endl;
  }
}
