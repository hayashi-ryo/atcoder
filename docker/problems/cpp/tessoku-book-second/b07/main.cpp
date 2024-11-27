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

  for (int i = 0; i < T; i++)
  {
    if (i == 0)
    {
      sumWorkSchedule[i] = workSchedule[i];
    }
    else
    {
      sumWorkSchedule[i] = sumWorkSchedule[i - 1] + workSchedule[i];
    }
  }

  for (int i = 0; i < T; i++)
  {
    cout << sumWorkSchedule[i] << endl;
  }
  return 0;
}