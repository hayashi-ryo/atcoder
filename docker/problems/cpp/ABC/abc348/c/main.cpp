#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  map<int, int> beans;
  for (int i = 0; i < N; i++)
  {
    int a, c;
    cin >> a >> c;
    if (beans.find(c) == beans.end())
    {
      beans[c] = a;
    }
    else
    {
      beans[c] = min(beans[c], a);
    }
  }
  int ans = 0;
  for (const auto &[key, value] : beans)
  {
    ans = max(ans, value);
  }
  cout << ans << endl;
  return 0;
}