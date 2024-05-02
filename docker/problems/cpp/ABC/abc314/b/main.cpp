#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<vector<int>> ca(N, vector<int>(0));
  for (int i = 0; i < N; i++)
  {
    int C;
    cin >> C;
    for (int j = 0; j < C; j++)
    {
      int a;
      cin >> a;
      ca[i].push_back(a);
    }
  }

  int X;
  cin >> X;
  int betCount = 40; // かけた数
  vector<int> ansNo; // 出力すべき番号

  for (int i = 0; i < N; i++)
  {
    if (find(ca[i].begin(), ca[i].end(), X) != ca[i].end()) // Ci人目がXにBETしているか確認
    {
      if (betCount > ca[i].size()) // BETした数が今の最低値より小さい場合
      {
        betCount = ca[i].size();
        ansNo.clear();
        ansNo.push_back(i + 1);
      }
      else if (betCount == ca[i].size()) // BETした数が今の最低値と同じ場合
      {
        ansNo.push_back(i + 1);
      }
    }
  }
  cout << ansNo.size() << endl;
  if (ansNo.size() != 0)
  {
    for (int i = 0; i < ansNo.size(); i++)
    {
      if (i != 0)
      {
        cout << " ";
      }
      cout << ansNo[i];
    }
  }
  cout << endl;

  return 0;
}
