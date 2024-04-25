#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int searchX(int x, vector<int> A)
{
  int L = 0, R = A.size();
  while (L <= R)
  {
    int M = (L + R) / 2;
    if (x < A[M])
    {
      R = M - 1;
    }
    else if (A[M] < x)
    {
      L = M + 1;
    }
    else if (x == A[M])
    {
      return M;
    }
  }
  return -1;
}
int main()
{
  // 入力
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  // 処理
  int ans = 0;
  // 出力
  ans = searchX(X, A);
  cout << ans + 1 << endl;
  return 0;
}