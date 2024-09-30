#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int H, W, Si, Sj;
  cin >> H >> W >> Si >> Sj;
  vector<vector<char>> C(H + 2, vector<char>(W + 2, '#'));
  for (int i = 1; i <= H; i++)
  {
    for (int j = 1; j <= W; j++)
    {
      cin >> C[i][j];
    }
  }
  string X;
  cin >> X;

  for (auto x : X)
  {
    if (x == 'L' && C[Si][Sj - 1] == '.')
    {
      Sj--;
    }
    else if (x == 'R' && C[Si][Sj + 1] == '.')
    {
      Sj++;
    }
    else if (x == 'U' && C[Si - 1][Sj] == '.')
    {
      Si--;
    }
    else if (x == 'D' && C[Si + 1][Sj] == '.')
    {
      Si++;
    }
  }

  cout << Si << " " << Sj << endl;
  return 0;
}