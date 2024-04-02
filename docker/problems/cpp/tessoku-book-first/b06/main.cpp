#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int N, Q;
int main()
{
  cin >> N;
  vector<int> A(N + 1);
  vector<int> sumWin(N + 1);
  for (int i = 1; i < N + 1; ++i)
  {
    cin >> A[i];
    sumWin[i] = sumWin[i - 1] + A[i];
  }
  cin >> Q;
  vector<int> L(N);
  vector<int> R(N);
  for (int i = 0; i < Q; ++i)
  {
    cin >> L[i] >> R[i];
  }
  for (int i = 0; i < Q; ++i)
  {
    int winCount = sumWin[R[i]] - sumWin[L[i] - 1];
    int loseCount = R[i] - L[i] + 1 - winCount;
    string ans = "";
    if (winCount > loseCount)
    {
      ans = "win";
    }
    else if (winCount < loseCount)
    {
      ans = "lose";
    }
    else if (winCount == loseCount)
    {
      ans = "draw";
    }
    cout << ans << endl;
  }
  return 0;
}