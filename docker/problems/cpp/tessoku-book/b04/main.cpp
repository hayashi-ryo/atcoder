#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string N;
  cin >> N;
  int ans = 0;
  for (int i = 0; i < N.size(); i++)
  {
    if (N[i] == '1')
    {
      ans += pow(2, N.size() - i - 1);
    }
  }
  cout << ans << endl;
  return 0;
}