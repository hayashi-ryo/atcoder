#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int Q;
  queue<string> line;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    int q;
    string Name;
    cin >> q;
    if (q == 1)
    {
      cin >> Name;
      line.push(Name);
    }
    else if (q == 2)
    {
      cout << line.front() << endl;
    }
    else if (q == 3)
    {
      line.pop();
    }
  }
}