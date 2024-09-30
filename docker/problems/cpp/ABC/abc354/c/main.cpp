#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

struct Card
{
  int a;
  int c;
  int idx;
};

int main()
{
  int N;
  cin >> N;
  vector<Card> cardList(N);
  vector<int> ans;

  for (int i = 0; i < N; i++)
  {
    int a, c;
    cin >> a >> c;
    cardList[i] = {a, c, i};
  }

  // cardListをcの昇順でソート
  sort(cardList.begin(), cardList.end(), [](const Card &card1, const Card &card2)
       { return card1.c < card2.c; });

  // ansのリストに追加していく
  int maxA = 0;
  for (int i = 0; i < N; i++)
  {
    if (cardList[i].a > maxA)
    {
      maxA = cardList[i].a;
      ans.push_back(cardList[i].idx);
    }
  }

  // 答えを出力
  sort(ans.begin(), ans.end());
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
