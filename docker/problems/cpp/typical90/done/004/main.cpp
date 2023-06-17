#include <bits/stdc++.h>
using namespace std;
int main()
{
  /*
  方針
  行ごと、列ごとの合算値をあらかじめ計算しておくことで、各マスの出力を高速化する
  */

  // 入力
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> a[i][j];
    }
  }

  // 前処理
  vector<int> line(h);
  vector<int> column(w);
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      line[i] += a[i][j];
      column[j] += a[i][j];
    }
  }

  // 出力
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cout << line[i] + column[j] - a[i][j];
      if (j < w - 1)
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}