#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int sumOfDigits(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += (n % 10);
    n /= 10;
  }
  return sum;
}

int main()
{
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;

  for (int i = 1; i < n + 1; i++)
  {
    int x = sumOfDigits(i);
    if (a <= x && x <= b)
    {
      ans += i;
    }
  }
  cout << ans << endl;
}