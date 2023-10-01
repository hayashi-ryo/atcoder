#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> graph(N);
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    graph[a - 1] = b - 1;
    graph[b - 1] = a - 1;
  }
  for (int i = 0; i < M; i++)
  {
    int tmp = 0;
    for (int j = 0; j < N;)
  }
}