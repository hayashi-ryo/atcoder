#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int A, B;
  cin >> A >> B;
  int ans = 0;
  for (int i = 0; i < 10; i++)
  {
    if (i != (A + B))
    {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}