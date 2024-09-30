#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  if (B < C) // 日を跨がない場合
  {
    if (B < A && A < C)
    {
      cout << "No" << endl;
    }
    else
    {
      cout << "Yes" << endl;
    }
  }
  else
  {
    if (C < A && A < B)
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