#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int H, W, N;
  cin >> H >> W >> N;
  char grid[H][W];
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      grid[i][j] = '.';
    }
  }

  /*
    判定方法
      白に塗られている場合
        黒に塗る
        時計回りに回転
      黒に塗られている場合
        白に塗る
        反時計回りに回転
  */

  int direction = 0; // 0: 上, 1: 右, 2: 下, 3: 左
  int x = 0, y = 0;
  for (int i = 0; i < N; i++)
  {
    if (grid[x][y] == '.')
    {
      // マスを塗る
      grid[x][y] = '#';
      // 回転
      direction++;
      if (direction > 3)
      {
        direction = 0;
      }
    }
    else
    {
      // マスを塗る
      grid[x][y] = '.';
      // 回転
      direction--;
      if (direction < 0)
      {
        direction = 3;
      }
    }
    // 方向に応じて移動
    if (direction == 0) // 上方向
    {
      x--;
    }
    else if (direction == 1) // 右方向
    {
      y++;
    }
    else if (direction == 2) // 下方向
    {
      x++;
    }
    else if (direction == 3) // 左方向
    {
      y--;
    }
    // 範囲外にいる場合の補正
    if (x < 0)
    {
      x = H - 1;
    }
    else if (x == H)
    {
      x = 0;
    }
    if (y < 0)
    {
      y = W - 1;
    }
    else if (y == W)
    {
      y = 0;
    }
  }

  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      cout << grid[i][j];
    }
    cout << endl;
  }
  return 0;
}