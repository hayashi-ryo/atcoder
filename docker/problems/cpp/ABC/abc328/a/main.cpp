#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, X;
  cin >> N >> X;
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    int s = 0;
    cin >> s;
    if (s <= X)
    {
      ans += s;
    }
  }
  cout << ans << endl;
  return 0;
}