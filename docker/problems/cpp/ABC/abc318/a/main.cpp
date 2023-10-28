#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int N, M, P;

int main()
{
  cin >> N >> M >> P;
  int ans = 0;
  while (M <= N)
  {
    ans++;
    M += P;
  }
  cout << ans << endl;
}