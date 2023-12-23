#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    x[i] = a;
  }
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    y[i] = a;
  }
  // p=1 マンハッタン距離
  double D1 = 0;
  for (int i = 0; i < n; i++)
  {
    D1 += fabs(x[i] - y[i]);
  }
  cout << fixed << setprecision(8) << D1 << endl;
  ;
  // p=2 ユークリッド距離
  double D2 = 0;
  for (int i = 0; i < n; i++)
  {
    D2 += pow(fabs(x[i] - y[i]), 2);
  }
  cout << fixed << setprecision(8) << sqrt(D2) << endl;
  // p=3 ユークリッド距離
  double D3 = 0;
  for (int i = 0; i < n; i++)
  {
    D3 += pow(fabs(x[i] - y[i]), 3);
  }
  cout << fixed << setprecision(8) << pow(D3, 1.0 / 3) << endl;
  // p=∞ チェビシェフ距離
  double Dp = 0;
  for (int i = 0; i < n; i++)
  {
    Dp = max(Dp, fabs(x[i] - y[i]));
  }
  cout << fixed << setprecision(8) << Dp << endl;
}