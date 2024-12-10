#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
int main()
{
  int H, W, D;
  cin >> H >> W >> D;
  vector<string> S(H);
  rep(i, H) cin >> S[i];

  // BFS
  queue<pair<pair<int, int>, int>> q;
  vector<vector<bool>> humidified(H, vector<bool>(W, false));

  // 初期状態として加湿器の位置をキューに追加
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (S[i][j] == 'H')
      {
        q.emplace(make_pair(i, j), 0);
        humidified[i][j] = true;
      }
    }
  }

  // BFSで探索
  while (!q.empty())
  {
    auto [pos, dist] = q.front();
    int x = pos.first, y = pos.second;
    q.pop();

    if (dist >= D) // 移動距離がDを超える場合は探索終了
    {
      continue;
    }

    for (int dir = 0; dir < 4; ++dir)
    {
      int nx = x + dx[dir];
      int ny = y + dy[dir];

      if (nx < 0 || nx >= H || ny < 0 || ny >= W || S[nx][ny] == '#' || humidified[nx][ny])
      {
        continue;
      }
      humidified[nx][ny] = true;
      q.emplace(make_pair(nx, ny), dist + 1);
    }
  }

  int ans = 0;
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (humidified[i][j] && S[i][j] != '#')
      {
        ++ans;
      }
    }
  }

  cout << ans << endl;
  return 0;
}