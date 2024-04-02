#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int D, N;
int main()
{
  cin >> D >> N;
  vector<int> B(D + 1);
  vector<int> answer(D + 1);
  vector<int> L(N + 1), R(N + 1);
  for (int i = 1; i <= N; ++i)
  {
    cin >> L[i] >> R[i];
  }

  for (int i = 1; i <= N; ++i)
  {
    B[L[i]] += 1;
    B[R[i] + 1] -= 1;
  }

  for (int i = 1; i < D + 1; ++i)
  {
    answer[i] = answer[i - 1] + B[i];
  }

  for (int i = 1; i <= D; ++i)
  {
    cout << answer[i] << endl;
  }
  return 0;
}