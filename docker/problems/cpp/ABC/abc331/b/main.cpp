#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N, S, M, L;
  cin >> N >> S >> M >> L;

  // 処理
  int ans = 1000000;
  for (int i = 0; i < 100; ++i)
  {
    for (int j = 0; j < 100; ++j)
    {
      for (int k = 0; k < 100; ++k)
      {
        if (6 * i + 8 * j + 12 * k >= N)
        {
          ans = min(ans, S * i + M * j + L * k);
        }
      }
    }
  }

  // 出力
  cout << ans << endl;
  return 0;
}