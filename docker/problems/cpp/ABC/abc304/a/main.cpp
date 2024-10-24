#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<string> S(N);
  pair<int, int> maxA = {10e9, N - 1};
  for (int i = 0; i < N; i++)
  {
    cin >> S[i] >> A[i];
    if (maxA.first > A[i])
    {
      maxA.first = A[i];
      maxA.second = i;
    }
  }

  int idx = maxA.second;
  for (int c = 0; c < N; c++)
  {
    cout << S[idx] << endl;
    ++idx;
    if (idx == N)
    {
      idx = 0;
    }
  }

  return 0;
}