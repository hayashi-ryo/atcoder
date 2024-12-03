#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  int N;
  string S;
  cin >> N >> S;

  int ans = 1;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == '/')
    {
      int l = 0, r = 0;

      int j = i - 1;
      while (j >= 0 && S[j] == '1')
      {
        ++l;
        --j;
      }

      int k = i + 1;
      while (k < N && S[k] == '2')
      {
        ++r;
        ++k;
      }
      if (l > 0 && r > 0)
      {
        ans = max(ans, 1 + min(l, r) * 2);
      }
    }
  }

  cout << ans << endl;

  return 0;
}