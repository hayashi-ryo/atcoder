#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  // 処理
  sort(A.begin(), A.end());
  int ans = A[0];
  for (int i = 1; i < N; i++)
  {
    if (abs(A[i] - A[i - 1]) != 1)
    {
      ans = (A[i] + A[i - 1]) / 2;
      break;
    }
  }

  // 出力
  cout << ans << endl;
  return 0;
}
