#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  long long minA = 1000001;
  long long maxA = -1000001;
  long long sum = 0;
  for (int i = 0; i < N; i++)
  {
    long long a;
    cin >> a;
    minA = min(a, minA);
    maxA = max(a, maxA);
    sum += a;
  }
  cout << minA << " " << maxA << " " << sum << endl;
}