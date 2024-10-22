#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<vector<int>> graph(N + 1); // グラフの隣接リスト

  // グラフの入力
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
  }

  // 閉路を検出するためのBFS
  vector<int> dist(N + 1, -1);   // 各頂点への距離
  vector<int> parent(N + 1, -1); // 親ノードを記録
  queue<int> q;
  dist[1] = 0; // スタートは頂点1
  q.push(1);

  int min_cycle = INT_MAX; // 最小の閉路の長さを記録

  while (!q.empty())
  {
    int node = q.front();
    q.pop();

    for (int neighbor : graph[node])
    {
      if (dist[neighbor] == -1)
      {
        // まだ訪れていない頂点に到達
        dist[neighbor] = dist[node] + 1;
        parent[neighbor] = node;
        q.push(neighbor);
      }
      else if (neighbor != parent[node])
      {
        // 閉路を検出した場合
        min_cycle = min(min_cycle, dist[node] + dist[neighbor] + 1);
      }
    }
  }

  if (min_cycle == INT_MAX)
  {
    // 閉路が見つからない場合
    cout << -1 << endl;
  }
  else
  {
    // 最小の閉路の辺数を出力
    cout << min_cycle << endl;
  }

  return 0;
}
