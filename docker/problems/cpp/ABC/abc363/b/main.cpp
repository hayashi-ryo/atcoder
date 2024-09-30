#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, T, P;
  cin >> N >> T >> P;
  vector<int> L(N);
  rep(i, N) cin >> L[i];

  sort(L.rbegin(), L.rend());

  if (T - L[P - 1] < 0) // 初期状態で超えている場合
  {
    cout << 0 << endl;
  }
  else // 髪の長さがP番目の人がT以上の長さになる場合
  {
    cout << T - L[P - 1] << endl;
  }
  return 0;
}