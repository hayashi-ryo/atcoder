#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N), ans(N);
  rep(i, N) cin >> A[i];

  for (int i = 0; i < K; i++)
  {
    ans[i] = A[N - K + i];
  }

  // 残りのN-K枚のカードをそのまま続ける
  for (int i = 0; i < N - K; i++)
  {
    ans[K + i] = A[i];
  }

  for (int i = 0; i < N; i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }

  cout << endl;
  return 0;
}