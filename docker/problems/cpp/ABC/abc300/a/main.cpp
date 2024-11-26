#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  vector<int> C(N);
  rep(i, N) cin >> C[i];
  int ans = 0;
  rep(i, N) if (C[i] == A + B) ans = i + 1;
  cout << ans << endl;
  return 0;
}