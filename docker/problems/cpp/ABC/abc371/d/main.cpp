#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 村の情報を保持する構造体
struct Village
{
  long long x; // 座標
  long long p; // 村人の人数
};

// クエリに対応する関数
long long query(const vector<Village> &villages, const vector<long long> &cumSum, long long L, long long R)
{
  // 左側のインデックスを探す
  auto left = lower_bound(villages.begin(), villages.end(), L, [](const Village &v, long long value)
                          { return v.x < value; });

  // 右側のインデックスを探す
  auto right = upper_bound(villages.begin(), villages.end(), R, [](long long value, const Village &v)
                           { return value < v.x; });

  int leftIdx = distance(villages.begin(), left);
  int rightIdx = distance(villages.begin(), right);

  // 累積和から区間の総人数を計算する
  if (leftIdx < rightIdx)
  {
    return cumSum[rightIdx] - cumSum[leftIdx];
  }
  else
  {
    return 0;
  }
}

int main()
{
  int N, Q;
  cin >> N;

  vector<Village> villages(N);
  vector<long long> cumSum(N + 1, 0); // 累積和

  // 村の情報を入力
  for (int i = 0; i < N; ++i)
  {
    cin >> villages[i].x;
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> villages[i].p;
  }

  // 座標順にソート
  sort(villages.begin(), villages.end(), [](const Village &a, const Village &b)
       { return a.x < b.x; });

  // 累積和を計算
  for (int i = 0; i < N; ++i)
  {
    cumSum[i + 1] = cumSum[i] + villages[i].p;
  }

  cin >> Q;

  // クエリに答える
  for (int i = 0; i < Q; ++i)
  {
    long long L, R;
    cin >> L >> R;
    cout << query(villages, cumSum, L, R) << endl;
  }

  return 0;
}
