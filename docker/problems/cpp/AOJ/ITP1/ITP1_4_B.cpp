#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double pi = 3.141592653589;
  double r;
  cin >> r;
  cout << printf("%.8lf", r * r * pi) << " " << printf("%.8lf", 2 * pi * r) << endl;
}