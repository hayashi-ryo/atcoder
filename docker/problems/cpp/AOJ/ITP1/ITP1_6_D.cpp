#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> A(n, vector<int>(m));
  vector<int> B(m);
  for (int i = 0; i < n; i++)
  {
    int a;
    for (int j = 0; j < m; j++)
    {
      cin >> a;
      A[i][j] = a;
    }
  }
  for (int i = 0; i < m; i++)
  {
    int b;
    cin >> b;
    B[i] = b;
  }
  for (int i = 0; i < n; i++)
  {
    int ans = 0;
    for (int j = 0; j < m; j++)
    {
      ans += A[i][j] * B[j];
    }
    cout << ans << endl;
  }
}