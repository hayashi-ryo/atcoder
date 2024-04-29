#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int A = 0, B = 0;
  for (int i = 0; i < 9; i++)
  {
    int a;
    cin >> a;
    A += a;
  }

  for (int i = 0; i < 8; i++)
  {
    int b;
    cin >> b;
    B += b;
  }

  if (A == B)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << A - B + 1 << endl;
  }
  return 0;
}