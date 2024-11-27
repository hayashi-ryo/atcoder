#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  auto it = find(A.begin(), A.end(), X);
  if (it != A.end())
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}