#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool isPrime(int x)
{
  for (int i = 2; i <= sqrt(x); ++i)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    int X;
    cin >> X;
    if (isPrime(X))
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}