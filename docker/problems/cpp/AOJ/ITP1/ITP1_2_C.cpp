#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> vec(3);
  for (int i = 0; i < 3; i++)
  {
    int a;
    cin >> a;
    vec.at(i) = a;
  }
  sort(vec.begin(), vec.end());
  cout << vec[0] << " " << vec[1] << " " << vec[2] << endl;
}