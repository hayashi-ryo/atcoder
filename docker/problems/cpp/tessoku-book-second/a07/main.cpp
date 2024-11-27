#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int D, N;
  cin >> D >> N;
  vector<int> L(N), R(N), AttendanceOfDay(D, 0), TotalOfAttendance(D, 0);
  for (int i = 0; i < N; i++)
  {
    cin >> L[i] >> R[i];
    L[i]--;
    R[i]--;
    AttendanceOfDay[L[i]]++;
    if (R[i] + 1 < D)
    { // 範囲内であることを確認
      AttendanceOfDay[R[i] + 1]--;
    }
  }

  for (int i = 0; i < D; i++)
  {
    if (i == 0)
    {
      TotalOfAttendance[i] = AttendanceOfDay[i];
    }
    else
    {
      TotalOfAttendance[i] = TotalOfAttendance[i - 1] + AttendanceOfDay[i];
    }
  }

  for (int i = 0; i < D; i++)
  {
    cout << TotalOfAttendance[i] << endl;
  }

  return 0;
}