#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  string ans = "";
  for (int i = 0; i < 3; i++)
  {
    ans += S[S.size() - 3 + i];
  }

  if (ans == "san")
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}