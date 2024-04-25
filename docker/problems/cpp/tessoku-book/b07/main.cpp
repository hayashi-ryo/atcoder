#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int T, N;
  cin >> T >> N;
  vector<int> L(N), R(N);
  for (int i = 0; i < N; i++)
  {
    cin >> L[i] >> R[i];
  }
  vector<int> sum(T + 1, 0);
  vector<int> work(T + 1, 0);
  for (int i = 0; i < N; i++)
  {
    work[L[i]]++;
    work[R[i]]--;
  }

  // 累積和を計算
  sum[0] = work[0];
  for (int i = 1; i < T; i++)
  {
    sum[i] = sum[i - 1] + work[i];
  }

  for (int i = 0; i < T; i++)
  {
    cout << sum[i] << endl;
  }

  return 0;
}