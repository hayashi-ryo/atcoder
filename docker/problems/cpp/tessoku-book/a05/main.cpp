#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  int ans = 0;
  for (int i = 1; i < N + 1; ++i)
  {
    for (int j = 1; j < N + 1; ++j)
    {
      if (1 <= (K - i - j) && (K - i - j) < N + 1)
      {
        ++ans;
      }
    }
  }
  cout << ans << endl;
  return 0;
}