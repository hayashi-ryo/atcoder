#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int N, X;

int search(int X, vector<int> a)
{
  int L = 0, R = N;
  while (L <= R)
  {
    int M = (L + R) / 2;
    if (X < a[M])
    {
      R = M - 1;
    }
    else if (X == a[M])
    {
      return M;
    }
    else if (X > a[M])
    {
      L = M + 1;
    }
  }
  return -1;
}

int main()
{
  // 入力
  cin >> N >> X;
  vector<int> a(N);
  rep(i, N) cin >> a[i];
  int ans = search(X, a);
  cout << ans + 1 << endl; // 添字が0から始まっているため1加算する
  return 0;
}