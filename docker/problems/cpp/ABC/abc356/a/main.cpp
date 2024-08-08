#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    A[i] = i + 1;
  }
  reverse(A.begin() + L - 1, A.begin() + R);
  for (int i = 0; i < N; ++i)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << A[i];
  }
  cout << endl;
  return 0;
}