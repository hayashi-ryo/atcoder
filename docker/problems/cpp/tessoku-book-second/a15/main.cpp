#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> X(N); // 順番を保持する配列
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    X[i] = A[i];
  }
  sort(X.begin(), X.end());                     // ソートする
  X.erase(unique(X.begin(), X.end()), X.end()); // 重複削除

  vector<int> ans(N);
  for (int i = 0; i < N; i++)
  {
    int it = lower_bound(X.begin(), X.end(), A[i]) - X.begin();
    ans[i] = it + 1;
  }
  for (int i = 0; i < N; i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }

  cout << endl;
  return 0;
}