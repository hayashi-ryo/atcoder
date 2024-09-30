#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
const int DEFMAX = 1'000'000'000;
int main()
{
  int N;
  cin >> N;
  vector<int> h(N + 1, 0);
  rep(i, N) cin >> h[i + 1];

  vector<int> dp(N + 1, DEFMAX);
  dp[1] = 0;
  dp[2] = abs(h[1] - h[2]);
  for (int i = 3; i <= N; i++)
  {
    dp[i] = min(abs(h[i] - h[i - 2]) + dp[i - 2], abs(h[i] - h[i - 1]) + dp[i - 1]);
  }

  vector<int> ans;
  int idx = N;
  while (idx > 0)
  {
    ans.push_back(idx);
    if (dp[idx] == dp[idx - 1] + abs(h[idx] - h[idx - 1]))
    {
      idx -= 1;
    }
    else
    {
      idx -= 2;
    }
  }

  reverse(ans.begin(), ans.end());

  cout << (int)ans.size() << endl;
  for (int i = 0; i < (int)ans.size(); i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }

  cout << endl;
  return 0;
}