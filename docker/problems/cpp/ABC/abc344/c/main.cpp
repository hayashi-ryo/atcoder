#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M, L, Q;
  cin >> N;
  vector<int> a(N);
  rep(i, N) cin >> a[i];
  cin >> M;
  vector<int> b(M);
  rep(i, M) cin >> b[i];
  cin >> L;
  vector<int> c(L);
  rep(i, L) cin >> c[i];
  cin >> Q;
  vector<int> x(Q);
  rep(i, Q) cin >> x[i];

  set<int> ans;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      for (int k = 0; k < L; k++)
      {
        ans.insert(a[i] + b[j] + c[k]);
      }
    }
  }

  for (int i = 0; i < Q; i++)
  {
    if (ans.find(x[i]) != ans.end())
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}