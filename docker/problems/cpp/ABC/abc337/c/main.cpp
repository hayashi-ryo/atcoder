#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, idx;
  cin >> N;
  vector<int> A(N), B(N, N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    if (A[i] == -1)
    {
      idx = i;
    }
    else
    {
      A[i]--;
      B[A[i]] = i;
    }
  }

  while (idx < N)
  {
    cout << idx + 1 << " ";
    idx = B[idx];
  }
  cout << endl;
  return 0;
}