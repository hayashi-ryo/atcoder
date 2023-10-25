#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  string s = "";
  for (int i = 0; i < N + 1; i++)
  {
    bool isDivisible = false;
    for (int j = 1; j < 10; j++)
    {
      if ((N % j == 0) && (i % (N / j) == 0))
      {
        s += to_string(j);
        isDivisible = true;
        break;
      }
    }
    if (!isDivisible)
    {
      s += '-';
    }
  }
  cout << s << endl;
}