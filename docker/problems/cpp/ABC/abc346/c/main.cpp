#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  ll sumK = K * (K + 1) / 2;
  sort(A.begin(), A.end());
  auto last = unique(A.begin(), A.end());
  A.erase(last, A.end());
  ll sum = 0;
  for (int i = 0; i < A.size(); i++)
  {
    if (A[i] <= K)
    {
      sum += A[i];
    }
    else
    {
      break;
    }
  }

  cout << sumK - sum << endl;

  return 0;
}