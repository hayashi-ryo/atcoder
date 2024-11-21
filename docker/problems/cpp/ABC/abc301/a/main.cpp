#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  int N;
  string S;
  cin >> N >> S;

  int a = 0, t = 0;
  for (int i = 0; i < (int)S.length(); i++)
  {
    if (S[i] == 'A')
    {
      a++;
    }
    else
    {
      t++;
    }
    if (N % 2 == 0 && N / 2 == a)
    {
      cout << "A" << endl;
      return 0;
    }
    if (N % 2 == 0 && N / 2 == t)
    {
      cout << "T" << endl;
      return 0;
    }
  }

  if (a > t)
  {
    cout << "A" << endl;
  }
  else
  {
    cout << "T" << endl;
  }
  return 0;
}