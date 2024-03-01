#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  for (int i = 0;; i++)
  {
    if (N & (1 << i))
    {
      cout << i << endl;
      break;
    }
  }
  return 0;
}