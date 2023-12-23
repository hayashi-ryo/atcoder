#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, l;
  cin >> n >> m >> l;
  vector<vector<long long>> A(n, vector<long long>(m));
  vector<vector<long long>> B(m, vector<long long>(l));
  // 行列Aの作成
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int a;
      cin >> a;
      A[i][j] = a;
    }
  }
  // 行列Bの作成
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < l; j++)
    {
      int b;
      cin >> b;
      B[i][j] = b;
    }
  }
  // 出力
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < l; j++)
    {
      long long c = 0;
      for (int k = 0; k < m; k++)
      {
        c += A[i][k] * B[k][j];
      }
      if (j == l - 1)
      {
        cout << c;
      }
      else
      {
        cout << c << " ";
      }
    }
    cout << endl;
  }
}