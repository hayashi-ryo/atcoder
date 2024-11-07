#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int H, W;
vector<string> grid;
string target = "snuke";
int directions[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

bool isInBounds(int x, int y)
{
  return x >= 0 && x < H && y >= 0 && y < W;
}

bool findSnuke(int x, int y, int dx, int dy)
{
  for (int i = 0; i < 5; ++i)
  {
    int nx = x + i * dx;
    int ny = y + i * dy;
    if (!isInBounds(nx, ny) || grid[nx][ny] != target[i])
    {
      return false;
    }
  }
  return true;
}

void printSnukePositions(int x, int y, int dx, int dy)
{
  for (int i = 0; i < 5; i++)
  {
    int nx = x + i * dx;
    int ny = y + i * dy;
    cout << (nx + 1) << " " << (ny + 1) << endl;
  }
}

int main()
{
  cin >> H >> W;
  grid.resize(H);
  rep(i, H) cin >> grid[i];

  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (grid[i][j] == 's')
      {
        for (int d = 0; d < 8; d++)
        {
          int dx = directions[d][0];
          int dy = directions[d][1];
          if (findSnuke(i, j, dx, dy))
          {
            printSnukePositions(i, j, dx, dy);
            return 0;
          }
        }
      }
    }
  }

  return 0;
}