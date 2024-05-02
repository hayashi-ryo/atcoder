#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

const string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

int main()
{
  int N;
  cin >> N;
  string ans = "3.";
  for (int i = 0; i < N; i++)
  {
    ans += pi.substr(i + 2, 1);
  }

  cout << ans << endl;
  return 0;
}