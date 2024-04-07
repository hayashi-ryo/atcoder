#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

const int INF = numeric_limits<int>::max();
int H, W, N;
vector<string> grid;
vector<vector<int>> energy;
map<pair<int, int>, int> medMap;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool isValid(int x, int y)
{
  return x >= 0 && x < H && y >= 0 && y < W && grid[x][y] != '#';
}

bool bfs(pair<int, int> start, pair<int, int> goal)
{
  queue<pair<int, int>> q;
  q.push(start);
  energy[start.first][start.second] = 0;

  while (!q.empty())
  {
    auto [x, y] = q.front();
    q.pop();

    if (x == goal.first && y == goal.second)
    {
      return true; // ゴールに到達
    }

    for (int i = 0; i < 4; ++i)
    {
      int nx = x + dx[i], ny = y + dy[i];

      if (!isValid(nx, ny))
        continue;

      int nextEnergy = energy[x][y] - 1; // 移動コスト
      if (medMap.find({nx, ny}) != medMap.end())
      {
        nextEnergy = max(nextEnergy, medMap[{nx, ny}]);
      }

      // エネルギーが0以上であれば移動可能
      if (nextEnergy >= 0 && energy[nx][ny] < nextEnergy)
      {
        energy[nx][ny] = nextEnergy;
        q.push({nx, ny});
      }
    }
  }

  return false; // ゴールに到達できなかった
}

int main()
{
  cin >> H >> W;
  grid.resize(H);
  energy.assign(H, vector<int>(W, -INF));
  pair<int, int> start, goal;

  for (int i = 0; i < H; ++i)
  {
    cin >> grid[i];
    for (int j = 0; j < W; ++j)
    {
      if (grid[i][j] == 'S')
        start = {i, j};
      if (grid[i][j] == 'T')
        goal = {i, j};
    }
  }

  cin >> N;
  for (int i = 0; i < N; ++i)
  {
    int r, c, e;
    cin >> r >> c >> e;
    r--;
    c--; // インデックスを0ベースに調整
    medMap[{r, c}] = e;
  }

  if (bfs(start, goal))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
