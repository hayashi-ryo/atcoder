#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> H(N);
  rep(i, N) cin >> H[i];

  int ans = 0, handsCount = 0;
  for (int i = 0; i < N; i++)
  {
    handsCount += H[i];
    if (handsCount > M)
    {
      break;
    }
    ans++;
  }

  cout << ans << endl;
  return 0;
}