#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double PI = acos(-1);
int main()
{
  double a, b, C;
  cin >> a >> b >> C;
  /*
  S:面積
  L:周の長さ
  h:aを底辺とした時の高さ
  */
  double rad = C * PI / 180;
  double S, L, h;
  S = a * b * sin(rad) / 2;
  L = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(rad)) + a + b;
  h = 2 * S / a;
  cout << fixed << setprecision(8) << S << endl;
  cout << fixed << setprecision(8) << L << endl;
  cout << fixed << setprecision(8) << h << endl;
}