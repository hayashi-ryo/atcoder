#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M), C(M);
  vector<pair<int, int>> G[N];

  // ダイクストラ法
  vector<bool> kakutei(N, false);
  vector<int> cur(N, 1e9);
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

  for (int i = 0; i < M; i++)
  {
    cin >> A[i] >> B[i] >> C[i];
    A[i]--;
    B[i]--;
    G[A[i]].push_back(make_pair(B[i], C[i]));
    G[B[i]].push_back(make_pair(A[i], C[i]));
  }

  cur[0] = 0;
  Q.push(make_pair(cur[0], 0));

  while (!Q.empty())
  {
    int pos = Q.top().second;
    Q.pop();
    if (kakutei[pos])
    {
      continue;
    }

    kakutei[pos] = true;
    for (int i = 0; i < (int)G[pos].size(); i++)
    {
      int nex = G[pos][i].first;
      int cost = G[pos][i].second;
      if (cur[nex] > cur[pos] + cost)
      {
        cur[nex] = cur[pos] + cost;
        Q.push(make_pair(cur[nex], nex));
      }
    }
  }

  for (auto c : cur)
  {
    if (c == 1e9)
    {
      cout << -1 << endl;
    }
    else
    {
      cout << c << endl;
    }
  }

  return 0;
}