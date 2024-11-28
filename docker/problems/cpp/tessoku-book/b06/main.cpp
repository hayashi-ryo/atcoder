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
  int Q;
  cin >> Q;
  vector<int> L(Q), R(Q);
  for (int i = 0; i < Q; i++)
  {
    cin >> L[i] >> R[i];
    // 0-indexed
    L[i]--;
    R[i]--;
  }

  vector<int> sumLottery(N, 0);
  sumLottery[0] = A[0];
  for (int i = 1; i < N; i++)
  {
    sumLottery[i] = sumLottery[i - 1] + A[i];
  }

  for (int i = 0; i < Q; i++)
  {
    int win = sumLottery[R[i]] - sumLottery[L[i] - 1];
    int lose = R[i] - (L[i] - 1) - win;
    string ans;
    if (win > lose)
    {
      ans = "win";
    }
    else if (win == lose)
    {
      ans = "draw";
    }
    else if (win < lose)
    {
      ans = "lose";
    }

    cout << ans << endl;
  }

  return 0;
}