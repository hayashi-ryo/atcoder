#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

string getBinaryDigit(int x)
{
  string res = "";
  for (int i = 9; i > -1; i--)
  {
    int wari = (1 << i); // 1をiだけビットシフトしたもの。具体値は2^i
    res += to_string((x / wari) % 2);
  }
  return res;
}

int main()
{
  int N;
  cin >> N;
  cout << getBinaryDigit(N) << endl;
  return 0;
}