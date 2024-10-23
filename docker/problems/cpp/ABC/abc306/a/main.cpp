#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  string S, ans;
  cin >> N >> S;
  for (int i = 0; i < N; i++)
  {
    rep(c, 2) ans += S[i];
  }

  cout << ans << endl;
  return 0;
}