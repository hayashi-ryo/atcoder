#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  vector<int> ans;

  for (int i = 0; i < N; i++)
  {
    if (a[i] % K == 0)
    {
      ans.push_back(a[i]);
    }
  }
  for (int i = 0; i < ans.size(); i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << ans[i] / K;
  }

  cout << endl;
  return 0;
}