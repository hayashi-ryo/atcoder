#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M), dist(N + 1, -1);
  rep(i, M) cin >> A[i] >> B[i];
  vector<vector<int>> graph(N + 1, vector<int>());
  queue<int> Q;
  for (int i = 0; i < M; i++)
  {
    graph[A[i]].push_back(B[i]);
    graph[B[i]].push_back(A[i]);
  }

  Q.push(1);
  dist[1] = 0;
  while (!Q.empty())
  {
    int pos = Q.front();
    Q.pop();
    for (int i = 0; i < (int)graph[pos].size(); i++)
    {
      int to = graph[pos][i];
      if (dist[to] == -1)
      {
        dist[to] = dist[pos] + 1;
        Q.push(to);
      }
    }
  }

  rep(i, N) cout << dist[i + 1] << endl;
  return 0;
}