#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(2 * N);
  rep(i, 2 * N) cin >> A[i];

  int ans = 0;
  for (int i = 1; i < 2 * N - 1; i++)
  {
    if (A[i - 1] == A[i + 1])
    {
      ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}