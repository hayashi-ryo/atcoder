#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int N, M;
  cin >> N >> M;
  vector<int> graph[N];
  vector<int> dist(N);
  queue<int> Q;

  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    graph[a - 1].push_back(b - 1);
    graph[b - 1].push_back(a - 1);
  }

  // 幅優先探索
  rep(i, N) dist[i] = -1;
  Q.push(0);
  dist[0] = 0;
  while (!Q.empty())
  {
    int pos = Q.front();
    Q.pop();
    for (int i = 0; i < graph[pos].size(); i++)
    {
      int to = graph[pos][i];
      if (dist[to] == -1)
      {
        dist[to] = dist[pos] + 1;
        Q.push(to);
      }
    }
  }

  // 出力
  rep(i, N) cout << dist[i] << endl;
  return 0;
}