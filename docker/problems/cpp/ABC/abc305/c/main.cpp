#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  rep(i, H) cin >> S[i];

  int minRow = H, maxRow = 0, minCol = W, maxCol = 0;

  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (S[i][j] == '#')
      {
        minRow = min(minRow, i);
        maxRow = max(maxRow, i);
        minCol = min(minCol, j);
        maxCol = max(maxCol, j);
      }
    }
  }

  for (int i = minRow; i <= maxRow; i++)
  {
    for (int j = minCol; j <= maxCol; j++)
    {
      if (S[i][j] == '.')
      {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }
  return 0;
}