#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  vector<bool> dp(N + 1, false);
  dp[0] = false;

  for (int i = 1; i <= N; i++)
  {
    if (i >= A && dp[i - A] == false)
    {
      dp[i] = true;
    }
    else if (i >= B && dp[i - B] == false)
    {
      dp[i] = true;
    }
  }

  if (dp[N])
  {
    cout << "First" << endl;
  }
  else
  {
    cout << "Second" << endl;
  }

  return 0;
}