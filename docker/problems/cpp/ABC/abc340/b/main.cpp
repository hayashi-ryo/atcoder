#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int Q;
  cin >> Q;
  vector<int> vec;
  for (int i = 0; i < Q; i++)
  {
    int q, element;
    cin >> q >> element;
    if (q == 1)
    {
      vec.push_back(element);
    }
    else if (q == 2)
    {
      vector<int> revVec = vec;
      reverse(revVec.begin(), revVec.end());
      cout << revVec[element - 1] << endl;
    }
  }

  return 0;
}