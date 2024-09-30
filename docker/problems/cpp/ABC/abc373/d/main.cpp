#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const long long INF = numeric_limits<long long>::max(); // 無限大の値を表す

struct Edge
{
  int u, v;
  long long w;
};

int main()
{
  int N, M;
  cin >> N >> M;

  vector<vector<pair<int, long long>>> adj(N + 1); // 隣接リスト（頂点と重みのペア）
  vector<long long> x(N + 1, INF);                 // 各頂点の値を格納する配列

  for (int i = 0; i < M; ++i)
  {
    int u, v;
    long long w;
    cin >> u >> v >> w;
    adj[u].emplace_back(v, w);
    adj[v].emplace_back(u, -w); // 逆辺を追加
  }

  queue<int> q;
  vector<bool> visited(N + 1, false); // 訪問済みかどうかをチェックするための配列

  // 頂点1をスタートとして初期化
  x[1] = 0;
  q.push(1);
  visited[1] = true;

  while (!q.empty())
  {
    int u = q.front();
    q.pop();

    for (auto &edge : adj[u])
    {
      int v = edge.first;
      long long w = edge.second;

      if (x[v] == INF)
      {                  // まだ訪れていない場合
        x[v] = x[u] + w; // 関係 x[v] - x[u] = w に従って値を決定
        q.push(v);
      }
    }
  }

  // 結果の出力
  for (int i = 1; i <= N; ++i)
  {
    if (i != 1)
    {
      cout << " ";
    }
    cout << x[i];
  }
  cout << endl;

  return 0;
}
