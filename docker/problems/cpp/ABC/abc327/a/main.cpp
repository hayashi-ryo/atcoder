#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  string S;
  cin >> N >> S;
  string ans = "No";
  for (int i = 0; i < N - 1; ++i)
  {
    if ((S[i] == 'a' && S[i + 1] == 'b') || (S[i] == 'b' && S[i + 1] == 'a'))
    {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}