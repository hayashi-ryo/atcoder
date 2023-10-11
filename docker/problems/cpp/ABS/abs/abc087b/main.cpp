#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

  int a, b, c; // 各コインの枚数
  int x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  for (int i = 0; i < a + 1; i++)
  {
    for (int j = 0; j < b + 1; j++)
    {
      for (int k = 0; k < c + 1; k++)
      {
        int sumCoin = 500 * i + 100 * j + 50 * k;
        if (sumCoin == x)
        {
          ans++;
        }
        else if (sumCoin > x)
        {
          break;
        }
      }
    }
  }

  cout << ans << endl;
}