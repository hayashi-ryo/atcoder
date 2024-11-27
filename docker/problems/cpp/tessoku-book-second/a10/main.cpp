#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, D;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  cin >> D;
  vector<int> L(D), R(D);
  for (int i = 0; i < D; i++)
  {
    cin >> L[i] >> R[i];
    L[i]--;
    R[i]--;
  }

  // 左右の端から最も大きい部屋の情報を記録していって、L-Rの範囲外で最大の部屋を決定する。
  vector<int> leftMaxRoom(N, 0);
  vector<int> rightMaxRoom(N, 0);

  // 左から最大値を記録
  for (int i = 0; i < N; i++)
  {
    if (i == 0)
    {
      leftMaxRoom[i] = A[i];
    }
    else
    {
      leftMaxRoom[i] = max(leftMaxRoom[i - 1], A[i]);
    }
  }

  // 右から最大値を記録
  for (int i = N - 1; i >= 0; i--)
  {
    if (i == N - 1)
    {
      rightMaxRoom[i] = A[i];
    }
    else
    {
      rightMaxRoom[i] = max(rightMaxRoom[i + 1], A[i]);
    }
  }

  // 出力
  for (int i = 0; i < D; i++)
  {
    int maxOutside = 0;
    if (L[i] > 0)
      maxOutside = max(maxOutside, leftMaxRoom[L[i] - 1]);
    if (R[i] + 1 < N)
      maxOutside = max(maxOutside, rightMaxRoom[R[i] + 1]);
    cout << maxOutside << endl;
  }

  return 0;
}
