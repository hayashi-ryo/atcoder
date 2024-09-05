#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K, X;
  cin >> N >> K >> X;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  A.insert(A.begin() + K, X);
  for (int i = 0; i < (int)A.size(); i++)
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