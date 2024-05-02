#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int k, g, m;
  cin >> k >> g >> m;
  int i = 0;
  int glass = 0, mag = 0;
  while (i < k)
  {
    if (glass == g)
    { // グラスにg ml入っている場合
      glass = 0;
    }
    else if (mag == 0)
    { // マグカップが空の場合
      mag = m;
    }
    else
    {
      if (mag <= (g - glass))
      { // マグカップの残量がグラスにすべて入る場合
        glass += mag;
        mag = 0;
      }
      else
      { // マグカップの残量がグラスにすべて入らない場合
        mag -= (g - glass);
        glass = g;
      }
    }
    ++i;
  }

  cout << glass << " " << mag << endl;
  return 0;
}