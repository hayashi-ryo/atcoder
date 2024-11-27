#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  rep(i, M) cin >> A[i] >> B[i];
  vector<vector<int>> graph(N + 1, vector<int>());
  for (int i = 0; i < M; i++)
  {
    graph[A[i]].push_back(B[i]);
    graph[B[i]].push_back(A[i]);
  }

  for (int i = 1; i <= N; i++)
  {
    cout << i << ": {";
    for (int j = 0; j < (int)graph[i].size(); ++j)
    {
      if (j != 0)
      {
        cout << ", ";
      }
      cout << graph[i][j];
    }
    cout << "}" << endl;
  }

  return 0;
}