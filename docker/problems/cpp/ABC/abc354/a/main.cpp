#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int H;
  cin >> H;
  int tall = 0, i = 0;
  while (tall <= H)
  {
    tall += pow(2, i);
    i++;
  }
  cout << i << endl;
  return 0;
}