#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  string S;
  cin >> N >> K >> S;
  int ans = 0, cnt = 0;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == 'O')
    {
      cnt++;
    }
    else
    {
      cnt = 0;
    }
    if (cnt == K)
    {
      ans++;
      cnt = 0;
    }
  }

  cout << ans << endl;
  return 0;
}