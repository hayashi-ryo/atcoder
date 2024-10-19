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
  ll divide7 = N / 7;

  ll divide15 = N / 15;
  ll divide21 = N / 21;
  ll divide35 = N / 35;

  ll divide105 = N / 105;

  cout << (divide3 + divide5 + divide7) - (divide15 + divide21 + divide35) + divide105 << endl;

  return 0;
}