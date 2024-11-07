#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  vector<int> A(5, 0);
  for (int i = 0; i < 4; i++)
  {
    int a;
    cin >> a;
    A[a]++;
  }

  int ans = 0;
  for (auto a : A)
  {
    ans += a / 2;
  }

  cout << ans << endl;
  return 0;
}