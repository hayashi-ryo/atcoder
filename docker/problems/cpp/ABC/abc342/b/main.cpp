#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N;
  vector<int> p(N);
  rep(i, N) cin >> p[i];
  cin >> Q;
  int a, b;
  for (int i = 0; i < Q; i++)
  {
    cin >> a >> b;
    int ait = find(p.begin(), p.end(), a) - p.begin();
    int bit = find(p.begin(), p.end(), b) - p.begin();
    if (ait < bit)
    {
      cout << a << endl;
    }
    else
    {
      cout << b << endl;
    }
  }

  return 0;
}