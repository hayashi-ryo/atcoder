#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // Input
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> b(N);
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
    b[i] = a[i];
  }

  // Processing
  // 累積和の計算
  sort(b.begin(), b.end());
  vector<ll> sum(N + 1);
  sum[0] = 0;
  for (int i = 0; i < N; i++)
  {
    sum[i + 1] = b[i] + sum[i];
  }

  // Output
  for (int i = 0; i < N; i++)
  {
    auto it = upper_bound(b.begin(), b.end(), a[i]);
    cout << sum[N] - sum[it - b.begin()];
    if (i != N - 1)
    {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}