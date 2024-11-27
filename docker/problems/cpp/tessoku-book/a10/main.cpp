#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, D;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  cin >> D;
  vector<int> L(D), R(D);
  for (int i = 0; i < D; i++)
  {
    cin >> L[i] >> R[i];
    // 0-indexed
    L[i]--;
    R[i]--;
  }

  // 左側の最大値を計算
  vector<int> leftSideLargestRoom(N), rightSideLargestRoom(N);
  leftSideLargestRoom[0] = A[0];
  for (int i = 1; i < N; i++)
  {
    leftSideLargestRoom[i] = max(leftSideLargestRoom[i - 1], A[i]);
  }

  // 右側の最大値を計算
  rightSideLargestRoom[N - 1] = A[N - 1];
  for (int i = N - 2; i >= 0; i--)
  {
    rightSideLargestRoom[i] = max(rightSideLargestRoom[i + 1], A[i]);
  }

  // 出力
  for (int i = 0; i < D; i++)
  {
    int leftMax = (L[i] > 0) ? leftSideLargestRoom[L[i] - 1] : 0;
    int rightMax = (R[i] < N - 1) ? rightSideLargestRoom[R[i] + 1] : 0;
    cout << max(leftMax, rightMax) << endl;
  }

  return 0;
}
