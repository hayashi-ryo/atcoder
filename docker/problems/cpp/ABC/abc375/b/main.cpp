#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

double calCost(ll x1, ll x2, ll y1, ll y2)
{
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
  int N;
  cin >> N;
  vector<ll> X(N), Y(N);
  for (int i = 0; i < N; i++)
  {
    cin >> X[i] >> Y[i];
  }

  X.push_back(0);
  Y.push_back(0);
  double ans = 0;

  ll x = 0, y = 0;
  for (int i = 0; i < N + 1; i++)
  {
    ans += calCost(x, X[i], y, Y[i]);
    x = X[i];
    y = Y[i];
  }

  cout << fixed << setprecision(20);
  cout << ans << endl;
  return 0;
}