#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  cin >> Q;
  vector<int> L(Q), R(Q);
  for (int i = 0; i < Q; i++)
  {
    cin >> L[i] >> R[i];
    L[i]--;
    R[i]--;
  }

  // n回目までの累積和を計算
  vector<int> sumLottery(N);
  for (int i = 0; i < N; i++)
  {
    if (i == 0)
    {
      sumLottery[i] = A[i];
    }
    else
    {
      sumLottery[i] = sumLottery[i - 1] + A[i];
    }
  }

  // 結果を出力していく
  for (int i = 0; i < Q; i++)
  {
    int win = sumLottery[R[i]] - sumLottery[L[i] - 1];
    int lose = R[i] - (L[i] - 1) - win;
    string ans = "";
    if (win > lose)
    {
      ans = "win";
    }
    else if (win < lose)
    {
      ans = "lose";
    }
    else if (win == lose)
    {
      ans = "draw";
    }
    cout << ans << endl;
  }
  return 0;
}