#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int N, M;
vector<bool> visited(100009);
vector<int> graph[100009];

void dfs(int pos)
{
  visited[pos] = true;
  for (int i = 0; i < graph[pos].size(); i++)
  {
    int nex = graph[pos][i];
    if (visited[nex] == false)
    {
      dfs(nex);
    }
  }
  return;
}

int main()
{
  cin >> N >> M;

  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    graph[a - 1].push_back(b - 1);
    graph[b - 1].push_back(a - 1);
  }

  rep(i, N) visited[i] = false;
  dfs(0);
  string ans = "The graph is connected.";
  for (int i = 0; i < N; i++)
  {
    if (visited[i] == false)
    {
      ans = "The graph is not connected.";
    }
  }

  cout << ans << endl;
  return 0;
}