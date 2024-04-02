#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int Q;
  set<int> s;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    int q, x;
    cin >> q >> x;
    if (q == 1)
    {
      s.insert(x);
    }
    else if (q == 2)
    {
      s.erase(x);
    }
    else if (q == 3)
    {
      auto it = s.lower_bound(x);
      if (it == s.end())
      {
        cout << -1 << endl;
      }
      else
      {
        cout << *it << endl;
      }
    }
  }
}