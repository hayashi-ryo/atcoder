#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int n, m;
string s;
int c[200000];
vector<int> p[200001];
int main(void)
{
  cin >> n >> m;
  cin >> s;
  for (int i = 0; i < n; i++)
    cin >> c[i];
  for (int i = 0; i < n; i++)
    p[c[i]].push_back(i);

  string t(n, '?');
  for (int i = 1; i <= m; i++)
  {
    int k = p[i].size();
    for (int j = 0; j < k; j++)
      t[p[i][(j + 1) % k]] = s[p[i][j]];
  }
  cout << t << endl;

  return 0;
}