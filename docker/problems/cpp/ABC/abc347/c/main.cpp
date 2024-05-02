#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  ll N, A, B;
  cin >> N >> A >> B;
  vector<ll> D(N);
  rep(i, N) cin >> D[i];

  ll cycle = A + B; // 1週間の日数
  ll mn = 4e18, mx = -1;
  for (int i = 0; i < N; i++)
  {
    D[i] = D[i] % cycle;
    mn = min(mn, D[i]);
    mx = max(mx, D[i]);
  }
  sort(D.begin(), D.end());   // 昇順ソート
  unique(D.begin(), D.end()); // 重複削除

  if (mx - mn + 1 <= A)
  {
    cout << "Yes" << endl;
  }
  else
  {
    for (int i = 0; i < D.size() - 1; i++)
    {
      if (cycle - (D[i + 1] - D[i]) + 1 <= A)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
    cout << "No" << endl;
  }
  return 0;
}