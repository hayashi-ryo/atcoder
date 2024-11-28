#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int T, N;
  cin >> T >> N;
  vector<int> L(N), R(N);
  rep(i, N) cin >> L[i] >> R[i];

  vector<int> workSchedule(T, 0), sumWorkSchedule(T, 0);
  for (int i = 0; i < N; i++)
  {
    workSchedule[L[i]]++;
    workSchedule[R[i]]--;
  }

  // 累積和計算
  sumWorkSchedule[0] = workSchedule[0];
  for (int i = 1; i < T; i++)
  {
    sumWorkSchedule[i] = sumWorkSchedule[i - 1] + workSchedule[i];
  }

  // 出力
  for (int i = 0; i < T; i++)
  {
    cout << sumWorkSchedule[i] << endl;
  }

  return 0;
}