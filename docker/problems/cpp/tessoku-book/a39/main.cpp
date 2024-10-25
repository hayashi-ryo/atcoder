#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> L(N), R(N);
  vector<pair<int, int>> tmp;
  rep(i, N) cin >> L[i] >> R[i], tmp.push_back(make_pair(R[i], L[i]));

  sort(tmp.begin(), tmp.end());
  for (int i = 0; i < N; i++)
  {
    R[i] = tmp[i].first;
    L[i] = tmp[i].second;
  }

  int currentTime = 0, ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (currentTime <= L[i])
    {
      currentTime = R[i];
      ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}