#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N;
  cin >> N;
  ll divide3 = N / 3;
  ll divide5 = N / 5;
  ll divide15 = N / 15;
  cout << divide3 + divide5 - divide15 << endl;
  return 0;
}