#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int H, W;
vector<string> grid;

// 4方向の移動用ベクトル
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool isMagnetNear(int x, int y)
{
  for (int d = 0; d < 4; ++d)
  {
    int nx = x + dx[d];
    int ny = y + dy[d];
    if (nx >= 0 && nx < H && ny >= 0 && ny < W && grid[nx][ny] == '#')
    {
      return true;
    }
  }
  return false;
}

int bfs(int sx, int sy)
{
  if (grid[sx][sy] == '#' || isMagnetNear(sx, sy))
    return 0;

  vector<vector<bool>> visited(H, vector<bool>(W, false));
  queue<pair<int, int>> q;
  q.push({sx, sy});
  visited[sx][sy] = true;
  int count = 0;

  while (!q.empty())
  {
    auto [x, y] = q.front();
    q.pop();
    ++count;

    for (int d = 0; d < 4; ++d)
    {
      int nx = x + dx[d];
      int ny = y + dy[d];
      if (nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && grid[nx][ny] != '#')
      {
        visited[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  }

  return count;
}

int main()
{
  cin >> H >> W;
  grid.resize(H);
  for (int i = 0; i < H; ++i)
  {
    cin >> grid[i];
  }

  int maxFreedom = 0;
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      if (grid[i][j] == '.')
      {
        int freedom = bfs(i, j);
        if (freedom > maxFreedom)
        {
          maxFreedom = freedom;
        }
      }
    }
  }

  cout << maxFreedom << endl;
  return 0;
}
