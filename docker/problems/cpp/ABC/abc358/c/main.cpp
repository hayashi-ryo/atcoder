#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  int ans = N;
  for (int bit = 0; bit < (1 << N); ++bit) // 2^N 通りの選び方をビット全探索
  {
    bitset<10> coveredFlavors;
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
      if (bit & (1 << i))
      {
        ++cnt;
        for (int j = 0; j < M; j++)
        {
          if (S[i][j] == 'o')
          {
            coveredFlavors.set(j);
          }
        }
      }
    }
    if (coveredFlavors.count() == M)
    {
      ans = min(ans, cnt);
    }
  }

  cout << ans << endl;
  return 0;
}