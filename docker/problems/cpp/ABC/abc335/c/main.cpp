#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N >> Q;
  deque<pair<int, int>> xy;
  for (int i = 1; i <= N; i++)
  {
    xy.push_back({i, 0});
  }
  for (int i = 0; i < Q; i++)
  {
    int query;
    cin >> query;
    if (query == 1)
    {
      char move;
      cin >> move;
      int x = xy[0].first, y = xy[0].second;
      if (move == 'R')
      {
        xy.push_front({x + 1, y});
      }
      if (move == 'L')
      {
        xy.push_front({x - 1, y});
      }
      if (move == 'U')
      {
        xy.push_front({x, y + 1});
      }
      if (move == 'D')
      {
        xy.push_front({x, y - 1});
      }
      xy.pop_back();
    }
    else if (query == 2)
    {
      int parts;
      cin >> parts;
      parts--;
      cout << xy[parts].first << " " << xy[parts].second << endl;
    }
  }

  return 0;
}