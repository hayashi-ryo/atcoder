#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> programmer(N + 1, 0);
  for (int i = 0; i < M; i++)
  {
    int win, lose;
    cin >> win >> lose;
    programmer[lose]++;
  }

  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    if (programmer[i] == 0 && ans == 0)
    {
      ans = i;
    }
    else if (programmer[i] == 0 && ans != 0)
    {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << ans << endl;
  return 0;
}