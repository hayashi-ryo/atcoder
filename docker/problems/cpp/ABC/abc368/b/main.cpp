#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool check(vector<int> c)
{
  int cnt = 0;
  for (int i = 0; i < c.size(); i++)
  {
    if (c[i] > 0)
    {
      cnt++;
    }
  }
  if (cnt >= 2)
  {
    return false;
  }
  else
  {
    return true;
  }
}
int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int ans = 0;
  while (true)
  {
    ans++;
    sort(A.rbegin(), A.rend());
    A[0]--;
    A[1]--;

    if (check(A))
    {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
