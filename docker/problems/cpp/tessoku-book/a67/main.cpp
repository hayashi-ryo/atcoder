#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
long long MAX(long long a, long long b, long long c)
{
  return max(a, max(b, c));
}
long long MIN(long long a, long long b, long long c)
{
  return min(a, min(b, c));
}

class Unionfind
{
public:
  int par[100009], size[100009];
  void init(int a)
  {
    rep1(i, a) par[i] = -1;
    rep1(i, a) size[i] = 1;
  }
  int root(int a)
  {
    while (true)
    {
      if (par[a] == -1)
        break;
      else
        a = par[a];
    }
    return a;
  }
  void unite(int a, int b)
  {
    int A = root(a);
    int B = root(b);
    if (A == B)
      return;
    if (A > B)
    {
      par[B] = A;
      size[A] = size[A] + size[B];
    }
    else
    {
      par[A] = B;
      size[B] = size[B] + size[A];
    }
  }
  bool same(int a, int b)
  {
    if (root(a) == root(b))
      return true;
    return false;
  }
};
int main(void)
{
  Unionfind uf;
  int a, b, A[100009], B[100009], C[100009];
  cin >> a >> b;
  rep1(i, b) cin >> A[i] >> B[i] >> C[i];
  vector<pair<int, int>> E;
  rep1(i, b) E.push_back(make_pair(C[i], i));
  sort(E.begin(), E.end());
  int s = 0;
  uf.init(a);
  rep(i, E.size())
  {
    int d = E[i].second;
    if (uf.same(A[d], B[d]) == false)
    {
      uf.unite(A[d], B[d]);
      s += C[d];
    }
  }
  cout << s << endl;
}
