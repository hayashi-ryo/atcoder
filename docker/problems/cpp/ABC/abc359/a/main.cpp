#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, ans = 0;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    string S;
    cin >> S;
    if (S == "Takahashi")
    {
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}