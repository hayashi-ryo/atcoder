#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, S, K;
  int sum = 0;
  cin >> N >> S >> K;
  for (int i = 0; i < N; ++i)
  {
    int P, Q;
    cin >> P >> Q;
    sum += P * Q;
  }

  if (sum < S)
  { // 送料の計算
    sum += K;
  }
  cout << sum << endl;
  return 0;
}