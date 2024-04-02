#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N >> Q;
  int E[N];
  for (int i = 1; i <= N; i++)
  {
    E[i] = i;
  }
  int state = 0;
  for (int i = 0; i < Q; i++)
  {
    int type, x, y;
    cin >> type;
    if (type == 1)
    {
      cin >> x >> y;
      if (state % 2 == 0)
      {
        E[x] = y;
      }
      else
      {
        E[N + 1 - x] = y;
      }
    }
    else if (type == 2)
    {
      state++;
    }
    else if (type == 3)
    {
      cin >> x;
      if (state % 2 == 0)
      {
        cout << E[x] << endl;
      }
      else
      {
        cout << E[N + 1 - x] << endl;
      }
    }
  }

  return 0;
}