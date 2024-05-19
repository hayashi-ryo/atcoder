#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> cardList(N);
  vector<int> ans;
  unordered_set<int> removeSet;

  for (int i = 0; i < N; i++)
  {
    int a, c;
    cin >> a >> c;
    cardList[i] = {a, c};
  }

  for (int i = 0; i < N; i++)
  {
    if (removeSet.find(i) != removeSet.end())
    {
      continue;
    }
    for (int j = i + 1; j < N; j++)
    {
      if (removeSet.find(j) != removeSet.end())
      {
        continue;
      }
      if ((cardList[i].first > cardList[j].first) && (cardList[i].second < cardList[j].second))
      {
        removeSet.insert(j);
      }
      else if ((cardList[i].first < cardList[j].first) && (cardList[i].second > cardList[j].second))
      {
        removeSet.insert(i);
        break;
      }
    }
  }

  // ansを初期化する際に削除されていないカードのインデックスを追加
  for (int i = 0; i < N; i++)
  {
    if (removeSet.find(i) == removeSet.end())
    {
      ans.push_back(i);
    }
  }

  cout << ans.size() << endl;

  for (int i = 0; i < ans.size(); i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << ans[i] + 1;
  }
  cout << endl;

  return 0;
}
