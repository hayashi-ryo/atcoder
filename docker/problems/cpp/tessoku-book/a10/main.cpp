#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  /*
  左右から挟み込む累積mazを計算しておいて
  max(左側の累積max,右側の累積max)
  で計算を行う
  */

  // 入力
  int N, D;
  cin >> N;
  vector<int> a(N + 2);
  for (int i = 1; i <= N; ++i)
  {
    cin >> a[i];
  }
  cin >> D;
  vector<int> l(D + 2);
  vector<int> r(D + 2);
  for (int i = 1; i <= D; ++i)
  {
    cin >> l[i] >> r[i];
  }

  // 累積maxの計算
  vector<int> lMax(N + 2); // 左側から確認した時の最大の部屋人数
  vector<int> rMax(N + 2); // 右側から確認した時の最大の部屋人数
  for (int i = 1; i <= N; ++i)
  {
    lMax[i] = max(lMax[i - 1], a[i]);
  }

  for (int i = N; i >= 1; --i)
  {
    rMax[i] = max(rMax[i + 1], a[i]);
  }

  // 答えの出力
  for (int i = 1; i <= D; ++i)
  {
    cout << max(lMax[l[i] - 1], rMax[r[i] + 1]) << endl;
  }
  return 0;
}