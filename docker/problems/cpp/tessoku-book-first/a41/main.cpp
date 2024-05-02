#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N;
  string S;
  cin >> N >> S;

  string ans = "No";
  for (int i = 0; i < S.length() - 2; i++)
  {
    if (S[i] == 'R' && S[i + 1] == 'R' && S[i + 2] == 'R')
    {
      ans = "Yes";
    }
    if (S[i] == 'B' && S[i + 1] == 'B' && S[i + 2] == 'B')
    {
      ans = "Yes";
    }
  }

  cout << ans << endl;
  return 0;
}