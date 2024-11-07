#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int H, W, K;
vector<string> grid;
int ans = 0;
int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y, int cnt, vector<vector<bool>> &visited)
{
  if (cnt == K)
  {
    ans++;
    return;
  }
  visited[x][y] = true;
  for (int d = 0; d < 4; ++d)
  {
    int nx = x + directions[d][0];
    int ny = y + directions[d][1];
    if (nx >= 0 && nx < H && ny >= 0 && ny < W && grid[nx][ny] == '.' && !visited[nx][ny])
    {
      dfs(nx, ny, cnt + 1, visited);
    }
  }

  visited[x][y] = false;
}
int main()
{
  cin >> H >> W >> K;
  grid.resize(H);
  vector<vector<bool>> visited(H, vector<bool>(W, false));

  rep(i, H) cin >> grid[i];

  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      if (grid[i][j] == '.')
      {
        dfs(i, j, 0, visited);
      }
    }
  }

  cout << ans << endl;
  return 0;
}