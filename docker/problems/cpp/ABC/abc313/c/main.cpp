#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  ll sumA = 0, averageA = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    sumA += A[i];
  }
  sort(A.begin(), A.end());
  averageA = sumA / N;
  int remainder = sumA % N;
  vector<int> resultA(N, averageA);
  for (int i = 0; i < remainder; i++)
  {
    resultA[N - i - 1]++;
  }

  ll ans = 0;
  int l = 0;
  while (A[l] < resultA[l])
  {
    ans += resultA[l] - A[l];
    l++;
  }

  cout << ans << endl;
  return 0;
}