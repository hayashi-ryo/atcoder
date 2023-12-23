#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  while (1)
  {
    int H, W;
    cin >> H >> W;
    if (H == 0 & W == 0)
    {
      break;
    }
    else
    {
      for (int i = 0; i < H; i++)
      {
        string line = "";
        for (int j = 0; j < W; j++)
        {
          if (i == 0 | j == 0 | i == H - 1 | j == W - 1)
          {
            line += "#";
          }
          else
          {
            line += ".";
          }
        }
        cout << line << endl;
      }
    }
    cout << endl;
  }
}