#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  vector<string> ans{"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};

  auto it = find(ans.begin(), ans.end(), S);
  if (it < ans.end())
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}