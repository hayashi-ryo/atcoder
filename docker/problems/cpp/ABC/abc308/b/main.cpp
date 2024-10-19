#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> C(N), D(M);
  vector<int> P(M + 1);
  rep(i, N) cin >> C[i];
  rep(i, M) cin >> D[i];
  rep(i, M + 1) cin >> P[i];
  map<string, int> priceList;
  for (int i = 0; i < M; i++)
  {
    priceList.insert(make_pair(D[i], P[i + 1]));
  }

  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    auto it = priceList.find(C[i]);
    if (it != priceList.end())
    {
      ans += priceList[C[i]];
    }
    else
    {
      ans += P[0];
    }
  }

  cout << ans << endl;
  return 0;
}