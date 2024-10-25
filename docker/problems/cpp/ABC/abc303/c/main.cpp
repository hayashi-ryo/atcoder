#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M, H, K;
  string S;
  cin >> N >> M >> H >> K >> S;
  set<pair<int, int>> item;
  for (int i = 0; i < M; i++)
  {
    int tx, ty;
    cin >> tx >> ty;
    item.insert({tx, ty});
  }

  int x = 0, y = 0;
  for (auto s : S)
  {
    if (s == 'R')
      ++x;
    if (s == 'L')
      --x;
    if (s == 'U')
      ++y;
    if (s == 'D')
      --y;
    --H;
    if (H < 0)
    {
      cout << "No" << endl;
      return 0;
    }
    if (H < K && item.count({x, y}))
    {
      H = K;
      item.erase({x, y});
    }
  }
  cout << "Yes" << endl;
  return 0;
}