#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int M;
  cin >> M;
  vector<int> ans;
  for (int k = 0; k <= 10; ++k)
  {
    for (int i = 0; i < (M % 3); i++)
    {
      ans.push_back(k);
    }
    M /= 3;
  }

  cout << (int)ans.size() << endl;
  for (int i = 0; i < (int)ans.size(); i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }
  cout << endl;

  return 0;
}