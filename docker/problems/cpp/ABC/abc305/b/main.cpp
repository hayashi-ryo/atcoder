#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  map<char, int> dist;
  dist['A'] = 0;
  dist['B'] = 3;
  dist['C'] = 4;
  dist['D'] = 8;
  dist['E'] = 9;
  dist['F'] = 14;
  dist['G'] = 23;

  char p, q;
  cin >> p >> q;
  cout << abs(dist[q] - dist[p]) << endl;
  return 0;
}