#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, L;
  cin >> N >> L;
  int A[N];
  char B[N];
  rep(i, N) cin >> A[i] >> B[i];
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (B[i] == 'E')
    {
      ans = max(ans, L - A[i]);
    }
    else if (B[i] == 'W')
    {
      ans = max(ans, A[i]);
    }
  }

  cout << ans << endl;
  return 0;
}