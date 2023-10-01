#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int N, a, b, c;
  cin >> N;
  vector<int> coin(3);
  for (int i = 0; i < 3; i++)
    cin >> coin[i];

  int ans = 0;
  for (int i = 2; i > -1; i--)
  {
    ans += N % coin[i];
    N -=
  }
}