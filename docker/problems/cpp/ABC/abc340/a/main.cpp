#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int a, b, d;
  cin >> a >> b >> d;
  vector<int> seq;
  int ai = a;
  for (int i = 0; i < 109; i++)
  {
    seq.push_back(ai);
    ai += d;
    if (ai > b)
    {
      break;
    }
  }

  for (int i = 0; i < seq.size(); i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << seq[i];
  }
  cout << endl;
  return 0;
}