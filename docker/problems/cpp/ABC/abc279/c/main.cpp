#include <bits/stdc++.h>
using namespace std;
int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<char>> S(H, vector<char>(W));
  vector<vector<char>> T(H, vector<char>(W));
  for (int i = 0; i < H; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < W; j++)
    {
      S[i][j] = s[j];
    }
  }
  for (int i = 0; i < H; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < W; j++)
    {
      T[i][j] = s[j];
    }
  }
  vector<int> memo(W);
  for (int i = 0; i < W; i++)
  {
    int ngFlag = -1;
    for (int j = 0; j < W; j++)
    {
      int flag = -1;
      if (memo[j] == 1)
      {
        continue;
      }
      for (int k = 0; k < H; k++)
      {
        if (S[k][i] != T[k][j])
        {
          flag = 1;
          break;
        }
      }
      if (flag != 1)
      {
        memo[j] = 1;
        ngFlag = 1;
        break;
      }
    }
    if (ngFlag != 1)
    {
      break;
    }
  }

  for (int i = 0; i < W; i++)
  {
    if (memo[i] != 1)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}