#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N, K;
  cin >> N >> K;
  vector<int> a(N);
  vector<int> b(N);
  vector<int> c(N);
  vector<int> d(N);
  rep(i, N) cin >> a[i];
  rep(i, N) cin >> b[i];
  rep(i, N) cin >> c[i];
  rep(i, N) cin >> d[i];

  // a+b および c+d を計算
  vector<int> p(N * N); // a+b
  vector<int> q(N * N); // c+d
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      p[i * N + j] = a[i] + b[j];
      q[i * N + j] = c[i] + d[j];
    }
  }
  sort(p.begin(), p.end());
  sort(q.begin(), q.end());

  // 確認を実施
  for (int i = 0; i < p.size(); ++i)
  {
    int pos1 = lower_bound(q.begin(), q.end(), K - p[i]) - q.begin();
    if (pos1 < N * N && q[pos1] == K - p[i])
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}