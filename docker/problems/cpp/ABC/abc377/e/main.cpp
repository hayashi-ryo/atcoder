#include <iostream>
#include <vector>
#include <map>
#include <cstdint>

using namespace std;

typedef int64_t ll;

ll pow_mod(ll a, ll n, ll mod)
{
  ll result = 1;
  a %= mod;
  while (n > 0)
  {
    if (n & 1)
      result = result * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return result;
}

void dfs(int u, vector<int> &P, vector<bool> &visited, vector<int> &cycle)
{
  visited[u] = true;
  cycle.push_back(u);
  int v = P[u];
  if (!visited[v])
    dfs(v, P, visited, cycle);
}

int main()
{
  int N;
  ll K;
  cin >> N >> K;
  vector<int> P(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> P[i];
    --P[i]; // Convert to 0-based index
  }
  vector<bool> visited(N, false);
  vector<int> ans(N);
  for (int i = 0; i < N; ++i)
  {
    if (!visited[i])
    {
      vector<int> cycle;
      dfs(i, P, visited, cycle);
      int C = cycle.size();
      ll S = pow_mod(2, K, C);
      map<int, int> pos_in_cycle;
      for (int idx = 0; idx < C; ++idx)
      {
        pos_in_cycle[cycle[idx]] = idx;
      }
      for (int idx = 0; idx < C; ++idx)
      {
        int u = cycle[idx];
        int new_pos = (pos_in_cycle[u] + S) % C;
        ans[u] = cycle[new_pos];
      }
    }
  }
  for (int i = 0; i < N; ++i)
  {
    cout << ans[i] + 1 << (i == N - 1 ? '\n' : ' ');
  }
  return 0;
}
