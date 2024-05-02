#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  string ans, strN;
  strN = to_string(N);
  for (int i = 0; i < N; i++)
  {
    ans += strN;
  }
  cout << ans << endl;
  return 0;
}