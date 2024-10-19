#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<bool> isPrime(N + 1, true);
  isPrime[0] = false;
  isPrime[1] = false;

  for (int i = 2; i * i <= N; i++)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= N; j += i)
      {
        isPrime[j] = false; // iの倍数は素数ではない。
      }
    }
  }

  for (int i = 2; i <= N; i++)
  {
    if (isPrime[i])
    {
      cout << i << endl;
    }
  }

  return 0;
}