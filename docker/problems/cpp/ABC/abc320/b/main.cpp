#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool isPalidrome(string s)
{
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    if (s[i] != s[n - i - 1])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  int ans = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      string t = "";
      for (int k = i; k < j; k++)
      {
        t += s[k];
      }
      if (isPalidrome(t))
      {
        ans = max(ans, j - i);
      }
    }
  }

  cout << ans << endl;
}