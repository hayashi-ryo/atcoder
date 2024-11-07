#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), B(N, -1);
  map<int, int> save;
  rep(i, N) cin >> A[i];
  for (int i = 0; i < N; i++)
  {
    if (save.count(A[i]) != 0)
    {
      B[i] = save[A[i]];
    }
    save[A[i]] = i + 1;
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