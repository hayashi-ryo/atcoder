#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(7 * N), B(N, 0);
  rep(i, 7 * N) cin >> A[i];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      B[i] += A[i * 7 + j];
    }
  }

  for (int i = 0; i < N; i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << B[i];
  }
  cout << endl;

  return 0;
}