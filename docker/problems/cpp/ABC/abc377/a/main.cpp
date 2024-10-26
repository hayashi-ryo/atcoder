#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  vector<char> S(3);
  rep(i, 3) cin >> S[i];
  sort(S.begin(), S.end());
  string ans = "";
  rep(i, 3) ans += S[i];
  if (ans == "ABC")
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}