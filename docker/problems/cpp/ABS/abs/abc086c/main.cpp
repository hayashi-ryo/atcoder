#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  int preT = 0, preX = 0, preY = 0;
  bool can = true;
  for (int i = 0; i < n; i++)
  {
    int T = 0, X = 0, Y = 0;
    cin >> T >> X >> Y;
    int deltaT = 0, deltaX = 0, deltaY = 0;
    deltaT = T - preT;
    deltaX = abs(X - preX);
    deltaY = abs(Y - preY);
    if (deltaX + deltaY > deltaT)
    {
      can = false;
      break;
    }
    else if (deltaX + deltaY < deltaT && (deltaT - deltaX - deltaY) % 2 != 0)
    {
      can = false;
      break;
    }
    preT = T;
    preX = X;
    preY = Y;
  }

  if (can)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}