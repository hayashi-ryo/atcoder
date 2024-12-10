#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int manhattanDistance(int x1, int y1, int x2, int y2)
{
  return abs(x1 - x2) + abs(y1 - y2);
}

int humidifiedCells(int D, const vector<pair<int, int>> &humidifiers, const vector<pair<int, int>> &floors)
{
  int res = 0;
  for (auto humidifier : humidifiers)
  {
    for (auto floor : floors)
    {
      if (manhattanDistance(floor.first, floor.second, humidifier.first, humidifier.second) <= D)
      {
        res++;
        break;
      }
    }
  }
  return res;
}

int main()
{
  int H, W, D;
  cin >> H >> W >> D;
  vector<string> S(H);
  rep(i, H) cin >> S[i];

  vector<pair<int, int>> floors;
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (S[i][j] == '.')
      {
        floors.emplace_back(i, j);
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < (int)floors.size(); i++)
  {
    for (int j = i + 1; j < (int)floors.size(); j++)
    {
      vector<pair<int, int>> humidifiers = {floors[i], floors[j]};
      ans = max(ans, humidifiedCells(D, floors, humidifiers));
    }
  }

  cout << ans << endl;
  return 0;
}