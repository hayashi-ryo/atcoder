#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  int N, D;
  string S;
  cin >> N >> D >> S;

  int ans = 0;
  for (auto s : S)
  {
    if (s == '.')
    {
      ++ans;
    }
  }

  cout << ans + D << endl;
  return 0;
}