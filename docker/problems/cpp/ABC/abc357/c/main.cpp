#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

void createCarpet(vector<vector<char>> &carpet, int x, int y, int level, int size)
{
  if (level == 0)
  {
    carpet[x][y] = '#';
    return;
  }

  int newSize = size / 3;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i == 1 && j == 1) // 中央のセル
      {
        continue;
      }
      createCarpet(carpet, x + i * newSize, y + j * newSize, level - 1, newSize);
    }
  }
}

int main()
{
  int N;
  cin >> N;
  vector<vector<char>> carpet(pow(3, N), vector<char>(pow(3, N), '.'));
  createCarpet(carpet, 0, 0, N, pow(3, N));

  for (auto &row : carpet)
  {
    for (auto &cell : row)
    {
      cout << cell;
    }
    cout << endl;
  }

  return 0;
}