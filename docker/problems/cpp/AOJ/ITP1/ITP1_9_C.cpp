#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int turn = 0;
  cin >> turn;
  vector<int> point(2);
  for (int i = 0; i < turn; i++)
  {
    string taro, hanako;
    cin >> taro >> hanako;
    if (taro > hanako)
    {
      point[0] += 3;
    }
    else if (taro == hanako)
    {
      point[0] += 1;
      point[1] += 1;
    }
    else if (taro < hanako)
    {
      point[1] += 3;
    }
  }
  cout << point[0] << " " << point[1] << endl;
}