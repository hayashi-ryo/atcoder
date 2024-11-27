#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

class UnionFind
{
public:
  vector<int> root, size;

  void init(int N)
  {
    rep(i, N) root.push_back(-1), size.push_back(1);
  }

  int getRoot(int x)
  {
    while (true)
    {
      if (root[x] == -1)
        break;
      x = root[x];
    }
    return x;
  }

  void unite(int u, int v)
  {
    int rootU = getRoot(u);
    int rootV = getRoot(v);
    if (rootU == rootV)
    {
      return;
    }
    if (size[rootU] < size[rootV])
    {
      root[rootU] = rootV;
      size[rootV] += size[rootU];
    }
    else
    {
      root[rootV] = rootU;
      size[rootU] += size[rootV];
    }
  }

  bool sameRoot(int u, int v)
  {
    return getRoot(u) == getRoot(v);
  }
};

int main()
{
  int N, Q;
  cin >> N >> Q;

  UnionFind UF;
  UF.init(N);
  for (int i = 0; i < Q; i++)
  {
    int query, u, v;
    cin >> query >> u >> v;
    if (query == 1)
    {
      UF.unite(u, v);
    }
    else if (query == 2)
    {
      if (UF.sameRoot(u, v))
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
  }

  return 0;
}