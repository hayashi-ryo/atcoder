#include <bits/stdc++.h>
using namespace std;
int countEven(int N)
{
  int cnt = 0;
  while (true)
  {
    if (N % 2 == 0)
    {
      cnt++;
      N /= 2;
    }
    else
    {
      break;
    }
  }
  return cnt;
}
int main()
{
  int N = 0;
  cin >> N;
  int ans = 100;
  for (int i = 0; i < N; i++)
  {
    int a = 0;
    cin >> a;
    ans = min(ans, countEven(a));
  }
  cout << ans << endl;
}