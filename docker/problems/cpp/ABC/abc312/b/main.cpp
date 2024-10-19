#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool checkTakCode(int i, int j, const vector<string> &S)
{
  // 左上#領域
  for (int ii = 0; ii < 3; ii++)
  {
    for (int jj = 0; jj < 3; jj++)
    {
      if (S[i + ii][j + jj] != '#')
      {
        return false;
      }
    }
  }

  // 右下#領域
  for (int ii = 6; ii < 9; ii++)
  {
    for (int jj = 6; jj < 9; jj++)
    {
      if (S[i + ii][j + jj] != '#')
      {
        return false;
      }
    }
  }

  // 左上.領域
  for (int jj = 0; jj < 3; jj++)
  {
    if (S[i + 3][j + jj] != '.')
    {
      return false;
    }
  }

  for (int ii = 0; ii < 3; ii++)
  {
    if (S[i + ii][j + 3] != '.')
    {
      return false;
    }
  }
  if (S[i + 3][j + 3] != '.')
  {
    return false;
  }

  // 右下.領域
  for (int jj = 6; jj < 9; jj++)
  {
    if (S[i + 5][j + jj] != '.')
    {
      return false;
    }
  }

  for (int ii = 6; ii < 9; ii++)
  {
    if (S[i + ii][j + 5] != '.')
    {
      return false;
    }
  }
  if (S[i + 5][j + 5] != '.')
  {
    return false;
  }
  return true;
}
int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  bool ans = true;
  for (int i = 0; i < N - 8; i++)
  {
    for (int j = 0; j < M - 8; j++)
    {
      if (checkTakCode(i, j, S))
      {
        ans = false;
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }

  if (ans)
  {
    cout << endl;
  }
  return 0;
}