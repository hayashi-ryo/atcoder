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
  reverse(S.begin(), S.end());
  int cnt = 0;
  string ans = "";
  for (auto s : S)
  {
    if (s == '@')
    {
      cnt++;
    }
    if (cnt <= D)
    {
      ans += '.';
    }
    else
    {
      ans += s;
    }
  }
  reverse(ans.begin(), ans.end());

  cout << ans << endl;
  return 0;
}