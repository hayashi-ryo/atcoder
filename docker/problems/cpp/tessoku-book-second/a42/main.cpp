#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int getScore(int a, int b, int k, vector<int> &A, vector<int> &B)
{
  int cnt = 0;
  for (int i = 0; i < (int)A.size(); i++)
  {
    if (a <= A[i] && A[i] <= a + k && b <= B[i] && B[i] <= b + k)
    {
      ++cnt;
    }
  }

  return cnt;
}

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  int ans = 0;

  for (int i = 1; i <= 100; i++)
  {
    for (int j = 1; j <= 100; j++)
    {
      ans = max(ans, getScore(i, j, K, A, B));
    }
  }

  cout << ans << endl;
  return 0;
}