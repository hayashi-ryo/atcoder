#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> d(n);
  for (int i = 0; i < n; i++)
  {
    cin >> d[i];
  }
  set<int> di;
  for (int i = 0; i < n; i++)
  {
    di.insert(d[i]);
  }
  cout << di.size() << endl;
}