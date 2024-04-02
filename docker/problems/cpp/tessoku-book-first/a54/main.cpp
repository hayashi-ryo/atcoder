#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int Q;
  map<string, int> results;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    int q, point;
    string studentName;
    cin >> q >> studentName;
    if (q == 1)
    {
      cin >> point;
      results[studentName] = point;
    }
    else if (q == 2)
    {
      cout << results[studentName] << endl;
    }
  }

  return 0;
}