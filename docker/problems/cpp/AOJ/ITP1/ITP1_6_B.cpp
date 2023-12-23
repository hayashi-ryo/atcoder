#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  /*
  配列の構造
  0:S
  1:H
  2:K
  3:D
  */
  int N;
  cin >> N;
  vector<vector<int>> card(4, vector<int>(13));
  for (int i = 0; i < N; i++)
  {
    char mark;
    int num;
    cin >> mark >> num;
    num--;
    if (mark == 'S')
    {
      card[0][num] = 1;
    }
    else if (mark == 'H')
    {
      card[1][num] = 1;
    }
    else if (mark == 'C')
    {
      card[2][num] = 1;
    }
    else if (mark == 'D')
    {
      card[3][num] = 1;
    }
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 13; j++)
    {
      if (card[i][j] == 0)
      {
        if (i == 0)
        {
          cout << "S " << j + 1 << endl;
        }
        else if (i == 1)
        {
          cout << "H " << j + 1 << endl;
        }
        else if (i == 2)
        {
          cout << "C " << j + 1 << endl;
        }
        else if (i == 3)
        {
          cout << "D " << j + 1 << endl;
        }
      }
    }
  }
}