#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool is326LikeNum(int num)
{
  int x = num % 10; // 1の位
  num /= 10;
  int y = num % 10; // 10の位
  num /= 10;
  int z = num % 10; // 100の位
  return x == y * z;
}
int main()
{
  int N;
  cin >> N;

  while (true)
  {
    if (is326LikeNum(N))
    {
      break;
    }
    N++;
  }

  cout << N << endl;
}