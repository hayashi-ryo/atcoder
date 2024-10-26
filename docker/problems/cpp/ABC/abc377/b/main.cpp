#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  vector<string> S(8);
  rep(i, 8) cin >> S[i];
  vector<vector<bool>> ans(8, vector<bool>(8, true));

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (S[i][j] == '#')
      {
        for (int k = 0; k < 8; k++)
        {
          ans[i][k] = false;
          ans[k][j] = false;
        }
      }
    }
  }

  int ansCnt = 0;
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (ans[i][j])
      {
        ansCnt++;
      }
    }
  }

  cout << ansCnt << endl;
  return 0;
}