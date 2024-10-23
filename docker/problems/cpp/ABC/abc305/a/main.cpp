#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  int wari = N / 5;
  int amari = N % 5;
  if (amari > 2)
  {
    cout << wari * 5 + 5 << endl;
  }
  else
  {
    cout << wari * 5 << endl;
  }
  return 0;
}