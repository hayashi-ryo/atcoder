#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, X;
  cin >> N >> X;
  int i = 0;
  string ans = "No";
  while (i < N)
  {
    int a;
    cin >> a;
    if (a == X)
    {
      ans = "Yes";
      break;
    }
    ++i;
  }
  cout << ans << endl;
  return 0;
}