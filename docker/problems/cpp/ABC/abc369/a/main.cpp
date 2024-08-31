#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int A, B;
  cin >> A >> B;
  int ans = 0;
  if (A != B)
  {
    ans += 2;
  }
  if (abs(A - B) % 2 == 0)
  {
    ans += 1;
  }
  cout << ans << endl;
  return 0;
}