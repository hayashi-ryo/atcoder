#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  // 処理
  ll ans = 0;
  int j = 0; // 二つ目のポインタを初期化
  for (int i = 0; i < N; i++)
  {
    // jが条件を満たす限り、jを進める
    while (j < N && A[j] - A[i] <= K)
    {
      j++;
    }
    // [i, j)の範囲の要素が条件を満たす
    ans += j - i - 1; // i < j のため、自分自身を引く
  }

  // 出力
  cout << ans << endl;
  return 0;
}