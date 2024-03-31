#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  vector<int> ans;
  while (true)
  {
    int a = 0;
    cin >> a;
    ans.push_back(a);
    if (a == 0)
    {
      break;
    }
  }
  reverse(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << endl;
  }

  return 0;
}