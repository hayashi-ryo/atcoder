#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int rate;
  cin >> rate;
  cout << (int)(100 - (rate % 100)) << endl;
  return 0;
}