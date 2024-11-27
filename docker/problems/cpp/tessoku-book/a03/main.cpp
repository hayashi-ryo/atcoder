#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> P(N), Q(N);
  rep(i, N) cin >> P[i];
  rep(i, N) cin >> Q[i];
  string ans = "No";
  for (auto p : P)
  {
    auto it = find(Q.begin(), Q.end(), K - p);
    if (it != Q.end())
    {
      ans = "Yes";
    }
  }
  cout << ans << endl;
  return 0;
}