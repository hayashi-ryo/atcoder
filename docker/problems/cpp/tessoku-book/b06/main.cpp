#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N, Q;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  cin >> Q;
  vector<int> L(Q), R(Q);
  rep(i, Q) cin >> L[i] >> R[i];

  // 処理
  // 累積和を計算
  vector<int> sumA(N, 0);
  for (int i = 0; i < N; i++)
  {
    if (i == 0)
    {
      sumA[i] = A[i];
    }
    else
    {
      sumA[i] = sumA[i - 1] + A[i];
    }
  }

  // 出力
  for (int i = 0; i < Q; i++)
  {
    int win = sumA[R[i] - 1] - sumA[L[i] - 2];
    int lose = R[i] - L[i] + 1 - win;
    if (win > lose)
    {
      cout << "win" << endl;
    }
    else if (win == lose)
    {
      cout << "draw" << endl;
    }
    else
    {
      cout << "lose" << endl;
    }
  }

  return 0;
}