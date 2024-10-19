#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> K(N);
  for (int i = 0; i < N; i++)
  {
    cin >> K[i];
  }
  int total_sum = accumulate(K.begin(), K.end(), 0);
  int min_diff = total_sum; // 初期値は最大の合計値に設定

  // 各部署をグループAまたはグループBに割り当てる全ての方法を探索
  for (int mask = 0; mask < (1 << N); ++mask)
  {
    int sum_A = 0;
    for (int i = 0; i < N; ++i)
    {
      if (mask & (1 << i))
      {
        sum_A += K[i]; // 部署iをグループAに割り当て
      }
    }
    int sum_B = total_sum - sum_A;               // グループBは残りの部署の人数
    min_diff = min(min_diff, max(sum_A, sum_B)); // 最大人数が最小になるように更新
  }

  cout << min_diff << endl;
  return 0;
}