#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int ans = 0;
  for (int i = 1; i <= 12; i++)
  {
    string a;
    cin >> a;
    if ((int)a.size() == i)
    {
      ++ans;
    }
  }
  cout << ans << endl;

  return 0;
}