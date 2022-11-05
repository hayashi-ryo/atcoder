#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  while (1)
  {
    double n;
    cin >> n;
    if (n == 0)
    {
      break;
    }
    vector<int> point(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      point[i] = a;
      sum += a;
    }
    double average = sum / n;
    double hensa = 0;
    for (int i = 0; i < n; i++)
    {
      hensa += pow(point[i] - average, 2);
    }
    double ans = sqrt(hensa / n);
    cout << fixed << setprecision(8) << ans << endl;
  }
}