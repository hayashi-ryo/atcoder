#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());
  int l = 0, r = N - 1;
  int mid = 0;
  while (A[mid] != X)
  {
    mid = (l + r) / 2;
    if (A[mid] < X)
    {
      l = mid + 1;
    }
    else if (A[mid] > X)
    {
      r = mid - 1;
    }
  }
  cout << mid + 1 << endl;

  // 別解
  auto ans = lower_bound(A.begin(), A.end(), X) - A.begin();
  // cout << ans + 1 << endl;
  return 0;
}