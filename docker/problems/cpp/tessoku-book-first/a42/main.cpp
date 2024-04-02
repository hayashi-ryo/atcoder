#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int N, K;
int A[400], B[400];
int GetScore(int a, int b)
{
  int cnt = 0;
  for (int i = 0; i < N; i++)
  {
    if (a <= A[i] && A[i] <= a + K && b <= B[i] && B[i] <= b + K)
    {
      cnt++;
    }
  }
  return cnt;
}
int main()
{
  cin >> N >> K;
  rep(i, N) cin >> A[i] >> B[i];
  int ans = 0;
  for (int i = 0; i <= 100; i++)
  {
    for (int j = 0; j <= 100; j++)
    {
      ans = max(ans, GetScore(i, j));
    }
  }
  cout << ans << endl;
  return 0;
}