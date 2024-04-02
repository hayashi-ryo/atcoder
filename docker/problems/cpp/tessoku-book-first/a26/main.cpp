#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool isPrime(int x)
{
  for (int i = 2; i * i <= x; i++)
  {
    if (x % i == 0) // 割り切れる場合にfalse(素数でない)ことを返す
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int Q, X;
  cin >> Q;
  for (int i = 0; i < Q; i++)
  {
    cin >> X;
    if (isPrime(X) == true)
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