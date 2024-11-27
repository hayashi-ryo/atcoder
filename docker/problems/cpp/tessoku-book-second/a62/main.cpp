#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int N, M;
vector<int> A(100001), B(100001);
vector<vector<int>> graph(100001, vector<int>());
vector<bool> visited(100001, false);

void dfs(int pos)
{
  visited[pos] = true;
  for (int i = 0; i < (int)graph[pos].size(); i++)
  {
    int next = graph[pos][i];
    if (!visited[next])
      dfs(next);
  }
  return;
}

int main()
{
  cin >> N >> M;
  rep(i, M) cin >> A[i] >> B[i];
  for (int i = 0; i < M; i++)
  {
    graph[A[i]].push_back(B[i]);
    graph[B[i]].push_back(A[i]);
  }

  dfs(1);

  for (int i = 1; i <= N; i++)
  {
    if (!visited[i])
    {
      cout << "The graph is not connected." << endl;
      return 0;
    }
  }
  cout << "The graph is connected." << endl;
  return 0;
}