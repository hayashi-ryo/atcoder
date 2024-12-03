#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  int N;
  string S, expectedS = "";
  cin >> N >> S;

  if (N == 1)
  {
    expectedS = '/';
  }
  else if (N % 2 != 0)
  {
    for (int i = 0; i < N / 2; i++)
    {
      expectedS += '1';
    }
    expectedS += '/';
    for (int i = 0; i < N / 2; i++)
    {
      expectedS += '2';
    }
  }

  if (S == expectedS)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}