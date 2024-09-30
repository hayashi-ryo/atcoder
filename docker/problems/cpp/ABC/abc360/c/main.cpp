#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), W(N);

  rep(i, N) cin >> A[i];
  rep(i, N) cin >> W[i];

  vector<int> maxW(N, 0);
  for (int i = 0; i < N; i++)
  {
    A[i]--;
    maxW[A[i]] = max(maxW[A[i]], W[i]);
  }

  ll sumW = accumulate(W.begin(), W.end(), 0);
  ll sumMaxW = accumulate(maxW.begin(), maxW.end(), 0);

  cout << sumW - sumMaxW << endl;
  return 0;
}