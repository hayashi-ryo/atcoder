#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int preX = 0, preY = 0, preT = 0;
  bool flag = true;
  for (int i = 0; i < N; i++)
  {
    int t, x, y;
    cin >> t >> x >> y;
    int absx = abs(x - preX);
    int absy = abs(y - preY);
    int deltat = t - preT;
    // cout << "de" << deltat - absx - absy;
    if (absx + absy > deltat)
    {
      flag = false;
      break;
    }
    else if (
        absx + absy < deltat &&
        (deltat - absx - absy) % 2 != 0)
    {
      flag = false;
      break;
    }
    preX = x;
    preY = y;
    preT = t;
  }
  if (flag)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}