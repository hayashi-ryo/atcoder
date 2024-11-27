#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
const int MOD = 10'000;

ll calculate(ll current, char operation, ll value)
{
  switch (operation)
  {
  case '+':
    current += value;
    break;
  case '-':
    current -= value;
    break;
  case '*':
    current *= value;
    break;
  }
  current %= MOD;
  if (current < 0)
  {
    current += MOD;
  }
  return current;
}

int main()
{
  int N;
  cin >> N;
  ll ans = 0;

  for (int i = 0; i < N; i++)
  {
    char operation;
    ll value;
    cin >> operation >> value;

    ans = calculate(ans, operation, value);
    cout << ans << endl;
  }

  return 0;
}