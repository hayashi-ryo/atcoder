#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  char Sab, Sac, Sbc;
  cin >> Sab >> Sac >> Sbc;
  vector<int> rank(3, 0);
  vector<char> ans;
  ans.push_back('A');
  ans.push_back('B');
  ans.push_back('C');
  if (Sab == '>')
  {
    rank[0]++;
  }
  else
  {
    rank[1]++;
  }

  if (Sac == '>')
  {
    rank[0]++;
  }
  else
  {
    rank[2]++;
  }

  if (Sbc == '>')
  {
    rank[1]++;
  }
  else
  {
    rank[2]++;
  }

  for (int i = 0; i < 3; i++)
  {
    if (rank[i] == 1)
    {
      cout << ans[i] << endl;
    }
  }

  return 0;
}