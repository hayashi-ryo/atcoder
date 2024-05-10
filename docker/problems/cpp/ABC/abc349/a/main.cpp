#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N - 1);
  rep(i, N - 1) cin >> A[i];
  int sum = 0;
  for (int i = 0; i < N - 1; i++)
  {
    sum += A[i];
  }
  int ans = 0 - sum;
  cout << ans << endl;
  return 0;
}