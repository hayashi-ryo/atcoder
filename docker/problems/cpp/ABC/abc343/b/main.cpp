#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<vector<int>> a(N, vector<int>(N));
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < N; i++)
  {
    int ans = 0;
    for (int j = 0; j < N; j++)
    {
      if (a[i][j] != 0)
      {
        if (ans != 0)
        {
          cout << " ";
        }
        ans++;
        cout << j + 1;
      }
        }
    cout << endl;
  }

  return 0;
}