#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N, Q;
  cin >> N;
  vector<int> a(N);
  rep(i, N) cin >> a[i];
  sort(a.begin(), a.end());
  cin >> Q;
  vector<int> x(Q);
  rep(i, Q) cin >> x[i];

  // 出力
  for (int i = 0; i < Q; ++i)
  {
    int pos = lower_bound(a.begin(), a.end(), x[i]) - a.begin();
    cout << pos << endl;
  }
  return 0;
}