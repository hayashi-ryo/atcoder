#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;
  for (int i = 1; i < N - 1; i++)
  {
    if (S[i] == '.' && S[i - 1] == '#' && S[i + 1] == '#')
    {
      ++ans;
    }
  }

  cout << ans << endl;

  return 0;
}