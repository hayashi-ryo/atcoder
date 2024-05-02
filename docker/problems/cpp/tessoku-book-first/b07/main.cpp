#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int T, N;
int main()
{
  cin >> T >> N;
  vector<int> shift(T + 1);
  vector<int> sumWorkers(T + 1);
  vector<int> L(N);
  vector<int> R(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> L[i] >> R[i];
  }
  for (int i = 0; i < N; ++i)
  {
    shift[L[i]] += 1;
    shift[R[i]] -= 1;
  }
  sumWorkers[0] = shift[0];
  for (int i = 1; i < T; ++i)
  {
    sumWorkers[i] = sumWorkers[i - 1] + shift[i];
  }

  for (int t = 0; t < T; ++t)
  {
    cout << sumWorkers[t] << endl;
  }
  return 0;
}