#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> a(N + 1);
  vector<int> b(N + 1);
  vector<int> dp(N + 1);
  for (int i = 2; i <= N; i++)
  {
    cin >> a[i];
  }
  for (int i = 3; i <= N; i++)
  {
    cin >> b[i];
  }

  // 配列dpの入力
  dp[1] = 0;
  dp[2] = a[2];
  for (int i = 3; i <= N; i++)
  {
    dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
  }

  // 回答を作成する
  int place = N;
  vector<int> Answer;
  while (true)
  {
    Answer.push_back(place);
    if (place == 1) // 初期位置に戻っている場合終了する。
    {
      break;
    }

    // 部屋placeに辿り着く最適なルートを探索する。
    if (dp[place - 1] + a[place] == dp[place])
    {
      place -= 1; // Aのルート
    }
    else
    {
      place -= 2; // bのルート
    }
  }

  reverse(Answer.begin(), Answer.end());

  // 回答を出力
  cout << Answer.size() << endl;
  for (int i = 0; i < Answer.size(); i++)
  {
    if (i >= 1)
    {
      cout << " ";
    }
    cout << Answer[i];
  }

  cout << endl;
  return 0;
}