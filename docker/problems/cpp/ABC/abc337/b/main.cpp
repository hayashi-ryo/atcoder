#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S = "";
  cin >> S;
  string ABCS = S;
  sort(ABCS.begin(), ABCS.end());
  if (S == ABCS)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}