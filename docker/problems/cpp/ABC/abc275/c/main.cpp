#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<vector<char>> map(9, vector<char>(9));
  for (int i = 0; i < 9; i++)
  // 配列の作成
  {
    string line;
    cin >> line;
    for (int j = 0; j < 9; j++)
    {
      map[i][j] = line[j];
    }
  }
  // 出力
  int ans = 0;
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      if (map[i][j] == '#')
      {
        // 探索開始
        for (int dx = 1; dx < 9 - i; dx++)
        {
          for (int dy = 0; dy < 9 - j; dy++)
          {
            if (map[i + dx][j + dy] == '#')
            {
              if (
                  i + dx - dy < 9 and
                  j + dy + dx < 9 and
                  i - dy + 1 > 0)
              {
                if (map[i + dx - dy][j + dy + dx] == '#' and
                    map[i - dy][j + dx] == '#')
                {
                  ans++;
                }
              }
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
}