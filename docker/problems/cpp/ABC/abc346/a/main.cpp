#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  int A[N];
  rep(i, N) cin >> A[i];
  for (int i = 0; i < N - 1; i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << A[i] * A[i + 1];
  }
  cout << endl;
  return 0;
}