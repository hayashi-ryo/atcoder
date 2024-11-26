#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int H, W;

int search(int i, int j, const vector<string> &C)
{
  int res = 0;
  // 配列境界のチェックを追加
  if (i > 0 && j > 0 && i < H - 1 && j < W - 1)
  {
    if (
        C[i - 1][j - 1] != '#' ||
        C[i - 1][j + 1] != '#' ||
        C[i + 1][j - 1] != '#' ||
        C[i + 1][j + 1] != '#')
    {
      return res;
    }
  }

  while (true)
  {
    // 配列境界のチェックを追加
    if (i > 0 && j > 0 && i < H - 1 && j < W - 1)
    {
      if (C[i - 1][j - 1] == '#')
      {
        res++;
        i--;
        j--;
      }
      else
      {
        break;
      }
    }
    else
    {
      break;
    }
  }

  return res;
}

int main()
{
  cin >> H >> W;
  vector<string> C(H); // 修正: 配列ではなくベクターを使用
  rep(i, H) cin >> C[i];

  vector<int> S(min(H, W) + 1, 0);
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      if (C[i][j] == '#')
      {
        S[search(i, j, C)]++;
      }
    }
  }

  for (int i = 1; i < (int)S.size(); i++)
  { // 修正: <= を < に変更
    if (i != 1)
    {
      cout << " ";
    }
    cout << S[i];
  }
  cout << endl;

  return 0;
}
