#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> A(H), B(H);
  rep(i, H) cin >> A[i];
  rep(i, H) cin >> B[i];

  for (int s = 0; s < H; s++)
  {
    for (int t = 0; t < W; t++)
    {
      bool flg = true;
      for (int dx = 0; dx < H; dx++)
      {
        for (int dy = 0; dy < W; dy++)
        {
          if (A[(dx - s + H) % H][(dy - t + W) % W] != B[dx][dy])
          {
            flg = false;
          }
        }
        if (!flg)
        {
          break;
        }
      }
      if (flg)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}