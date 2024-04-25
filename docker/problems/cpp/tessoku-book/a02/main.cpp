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
  string ans = "No";
  for (int i = 0; i < N; i++)
  {
    if (A[i] == X)
    {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}