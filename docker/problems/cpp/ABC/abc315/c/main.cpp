#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> bk(n + 1);
  for (int i = 0; i < n; i++)
  {
    int f, s;
    cin >> f >> s;
    bk[f].push_back(s);
  }

  int res = 0;
  vector<int> best;
  for (int i = 1; i <= n; i++)
  {
    sort(bk[i].begin(), bk[i].end());
    reverse(bk[i].begin(), bk[i].end());
    if (bk[i].size() >= 2)
    {
      res = max(res, bk[i][0] + bk[i][1] / 2);
    }
    if (bk[i].size() >= 1)
    {
      best.push_back(bk[i][0]);
    }
  }
  sort(best.begin(), best.end());
  reverse(best.begin(), best.end());
  if (best.size() >= 2)
  {
    res = max(res, best[0] + best[1]);
  }
  cout << res << "\n";
  return 0;
}
