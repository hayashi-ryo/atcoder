#include <bits/stdc++.h>
using namespace std;
int main()
{
  int H, W;
  cin >> H >> W;
  int cntH, cntW;
  cntH = H / 2 + H % 2;
  cntW = W / 2 + W % 2;
  if (W == 1 || H == 1)
  {
    cout << H * W << endl;
  }
  else
  {
    cout << cntH * cntW << endl;
  }
}