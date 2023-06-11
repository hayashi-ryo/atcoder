#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<long long> a(N);
  int ans = 0;

  for (int i = 0; i < N; i++)
    cin >> a[i];

  for (int i = 0; i < N - 4; i++)
    for (int j = i + 1; j < N - 3; j++)
      for (int k = j + 1; k < N - 2; k++)
        for (int l = k + 1; l < N - 1; l++)
          for (int m = l + 1; m < N; m++)
            if (a[i] % P * a[j] % P * a[k] % P * a[l] % P * a[m] % P == Q)
              ans++;

  cout << ans << endl;
}