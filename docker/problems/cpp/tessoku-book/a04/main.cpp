#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  string ans = bitset<10>(N).to_string();
  cout << ans << endl;
  return 0;
}
