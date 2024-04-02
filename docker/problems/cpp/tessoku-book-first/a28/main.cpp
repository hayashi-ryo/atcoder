#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  int A[100009];
  char T[100009];
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cin >> T[i] >> A[i];
  }

  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    if (T[i] == '+')
    {
      ans += A[i];
    }
    if (T[i] == '-')
    {
      ans -= A[i];
    }
    if (T[i] == '*')
    {
      ans *= A[i];
    }
    if (ans < 0)
    {
      ans += 10000;
    }

    ans %= 10000;
    cout << ans << endl;
  }

  return 0;
}