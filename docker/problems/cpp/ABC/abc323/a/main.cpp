#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string S;

int main()
{
  cin >> S;

  string ans = "Yes";
  for (int i = 1; i < S.length(); i += 2)
  {
    if (S[i] == '1')
    {
      ans = "No";
    }
  }

  cout << ans << endl;
}