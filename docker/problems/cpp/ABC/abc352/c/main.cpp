#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<ll> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  /*
  方針:
    一番[Bi-Ai]が大きい巨人が一番上に乗り、それ以外の巨人は土台になる。その時の頭の高さは
    ΣAi + max[Bi-Ai]となる。
  */
  ll maxHeadSize = 0; // 一番大きな巨人のB-A
  ll totalSize = 0;   // 地面を基準とした頭の高さの最大値
  for (int i = 0; i < N; i++)
  {
    maxHeadSize = max(maxHeadSize, B[i] - A[i]);
    totalSize += A[i];
  }

  cout << totalSize + maxHeadSize << endl;
  return 0;
}