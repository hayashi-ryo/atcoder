#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

ll N;
ll A[200001], T[200001], S[200001];
int main()
{
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cin >> A[i];
  }
  for (int i = 1; i <= N - 1; i++)
  {
    cin >> S[i] >> T[i];
  }

  /*
    方針
    i=1から順にすることで実施可能
  */
  for (int i = 1; i <= N - 1; i++)
  {
    ll exchangeCnt = A[i] / S[i];
    A[i + 1] += exchangeCnt * T[i];
  }

  cout << A[N] << endl;
  return 0;
}