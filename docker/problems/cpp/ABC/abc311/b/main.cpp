#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, D;
  cin >> N >> D;
  vector<string> S(N);
  rep(i, N) cin >> S[i];

  int ans = 0, now = 0;
  for (int j = 0; j < D; j++)
  {
    bool hima = true;
    for (int i = 0; i < N; i++)
    {
      if (S[i][j] != 'o')
      {
        hima = false;
        break;
      }
    }
    if (hima)
    {
      now++;
      ans = max(ans, now);
    }
    else
    {
      now = 0;
    }
  }
  cout << ans << endl;
  return 0;
}