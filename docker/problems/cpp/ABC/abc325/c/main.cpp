#include <iostream>
#include <vector>

using namespace std;

int H, W;
vector<string> grid;

bool isValid(int x, int y)
{
  return x >= 0 && x < H && y >= 0 && y < W;
}

void dfs(int x, int y)
{
  grid[x][y] = '.'; // mark the cell as visited
  int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
  int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

  for (int i = 0; i < 8; ++i)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (isValid(nx, ny) && grid[nx][ny] == '#')
    {
      dfs(nx, ny);
    }
  }
}

int countSensors()
{
  int sensorCount = 0;
  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      if (grid[i][j] == '#')
      {
        ++sensorCount;
        dfs(i, j); // mark all connected sensors as visited
      }
    }
  }
  return sensorCount;
}

int main()
{
  cin >> H >> W;
  grid.resize(H);
  for (int i = 0; i < H; ++i)
  {
    cin >> grid[i];
  }

  int result = countSensors();
  cout << result << endl;
  return 0;
}
