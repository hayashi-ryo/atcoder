#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    if (i % 3 == 0)
    {
      cout << 'x';
    }
    else
    {
      cout << 'o';
    }
  }
  cout << endl;
  return 0;
}