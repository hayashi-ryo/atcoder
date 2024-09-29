#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  ll M;
  cin >> N >> M;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  ll sumA = 0;
  rep(i, N) sumA += A[i];

  if (sumA <= M)
  {
    cout << "infinite" << endl;
    return 0;
  }

  int l = 0, r = 1'000'000'000;
  while (abs(l - r) > 1)
  {
    int mid = (l + r) / 2;
    ll sum = 0;
    for (int i = 0; i < N; i++)
    {
      sum += min(mid, A[i]);
    }

    if (sum <= M)
    {
      l = mid;
    }
    else
    {
      r = mid;
    }
  }
  cout << l << endl;
  return 0;
}