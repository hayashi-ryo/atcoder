#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;

  string ans = "";
  for (int i = 9; i > -1; i--)
  {
    int wari = (1 << i);
    cout << ((N / wari) % 2);
  }
  cout << ans << endl;
  return 0;
}