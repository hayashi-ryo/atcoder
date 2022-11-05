#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int r, c;
  cin >> r >> c;
  // 表の作成
  vector<vector<int>> table(r + 1, vector<int>(c + 1));
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      int a;
      cin >> a;
      table[i][j] = a;
      table[i][c] += a;
      table[r][j] += a;
      table[r][c] += a;
    }
  }
  // 出力
  for (int i = 0; i < r + 1; i++)
  {
    for (int j = 0; j < c + 1; j++)
    {
      if (j == c)
      {
        cout << table[i][j];
      }
      else
      {
        cout << table[i][j] << " ";
      }
    }
    cout << endl;
  }
}