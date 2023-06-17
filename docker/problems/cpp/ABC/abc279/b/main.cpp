#include <bits/stdc++.h>
using namespace std;
int main()
{
  string S;
  string T;
  cin >> S >> T;
  if (S.find(T) == string::npos)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }
}