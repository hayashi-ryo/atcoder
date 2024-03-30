#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool dp[100009];

int main()
{
  int N, a, b;
  cin >> N >> a >> b;
  for (int i = 0; i <= N; i++)
  {
    if (i >= a && dp[i - a] == false)
    {
      dp[i] = true;
    }
    else if (i >= b && dp[i - b] == false)
    {
      dp[i] = true;
    }
    else
    {
      dp[i] = false;
    }
  }

  if (dp[N] == true)
  {
    cout << "First" << endl;
  }
  else
  {
    cout << "Second" << endl;
  }
  return 0;
}