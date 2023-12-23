#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
const int x = 1000;
int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N) cin >> a[i];
  sort(a.begin(), a.end());

  string ans = "No";
  for (int i = 0; i < N; ++i)
  {
    bool breakFlag = false;
    for (int j = i + 1; j < N; ++j)
    {
      for (int k = j + 1; k < N; ++k)
      {
        if (a[i] + a[j] + a[k] == x)
        {
          breakFlag = true;
          ans = "Yes";
          break;
        }
      }
      if (breakFlag)
      {
        break;
      }
    }
    if (breakFlag)
    {
      break;
    }
  }

  cout << ans << endl;
  return 0;
}