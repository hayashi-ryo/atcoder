#include <bits/stdc++.h>
using namespace std;
int main()
{
  int h, w;
  cin >> h >> w;
  vector<vector<int>> v(h, vector<int>(w));
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> v[i][j];
    }
  }
  vector<vector<int>> output(h, vector<int>(w));
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> v[i][j];
    }
  }
}