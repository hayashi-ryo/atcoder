#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<ll> L(N), R(N), ans(N);
  ll minX = 0, maxX = 0, sumX = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> L[i] >> R[i];
    minX += L[i];
    maxX += R[i];
    sumX += L[i];
    ans[i] = L[i];
  }

  if (minX <= 0 && 0 <= maxX)
  {
    cout << "Yes" << endl;
    for (int i = 0; i < N; i++)
    {
      ll D = min(R[i] - L[i], -sumX);
      sumX += D;
      ans[i] += D;
    }

    for (int i = 0; i < N; i++)
    {
      if (i != 0)
      {
        cout << " ";
      }
      cout << ans[i];
    }
    cout << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}