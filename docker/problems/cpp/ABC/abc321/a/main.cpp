#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string N;
int main()
{
  cin >> N;
  for (int i = 0; i < N.length() - 1; i++)
  {
    if (stoi(N.substr(i, 1)) <= stoi(N.substr(i + 1, 1)))
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}