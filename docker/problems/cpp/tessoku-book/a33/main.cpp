#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int XOR_SUM = A[0];
  for (int i = 1; i < N; ++i)
  {
    XOR_SUM = (XOR_SUM ^ A[i]);
  }
  if (XOR_SUM != 0)
  {
    cout << "First" << endl;
  }
  else
  {
    cout << "Second" << endl;
  }
  return 0;
}