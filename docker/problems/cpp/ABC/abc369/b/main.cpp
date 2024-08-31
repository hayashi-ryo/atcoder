#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<pair<int, char>> piano(N);
  rep(i, N) cin >> piano[i].first >> piano[i].second;

  int ans = 0, L = 0, R = 0;
  for (int i = 0; i < N; i++)
  {
    if (piano[i].second == 'L')
    {
      if (L == 0)
      {
        L = piano[i].first;
      }
      else
      {
        ans += abs(piano[i].first - L);
        L = piano[i].first;
      }
    }
    else if (piano[i].second == 'R')
    {
      if (piano[i].second == 'R')
      {
        if (R == 0)
        {
          R = piano[i].first;
        }
        else
        {
          ans += abs(piano[i].first - R);
          R = piano[i].first;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}