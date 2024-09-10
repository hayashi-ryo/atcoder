#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

const double INF = numeric_limits<double>::infinity();

// 2都市間の距離を計算
double calcDistance(pair<int, int> city1, pair<int, int> city2)
{
  int dx = city1.first - city2.first;
  int dy = city1.second - city2.second;
  return sqrt(dx * dx + dy * dy);
}

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> city(N);
  vector<vector<double>> dist(N, vector<double>(N));
  vector<vector<double>> dp(1 << N, vector<double>(N, INF));

  // 都市の座標を入力
  rep(i, N) cin >> city[i].first >> city[i].second;

  // 各都市間の距離を計算
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      dist[i][j] = calcDistance(city[i], city[j]);
    }
  }

  // 開始位置を設定（都市0をスタート地点と仮定）
  dp[1][0] = 0;

  // すべての経路を探索
  for (int mask = 1; mask < (1 << N); ++mask)
  {
    for (int u = 0; u < N; ++u)
    {
      if (mask & (1 << u)) // u が訪問済みの場合
      {
        for (int v = 0; v < N; ++v)
        {
          if (!(mask & (1 << v))) // v が未訪問の場合
          {
            dp[mask | (1 << v)][v] = min(dp[mask | (1 << v)][v], dp[mask][u] + dist[u][v]);
          }
        }
      }
    }
  }

  // 全ての都市を訪問した後、最初の都市に戻る最短経路を計算
  double ans = INF;
  for (int i = 1; i < N; ++i)
  {
    ans = min(ans, dp[(1 << N) - 1][i] + dist[i][0]);
  }

  // 結果を出力
  cout.precision(12);
  cout << fixed << ans << endl;

  return 0;
}
