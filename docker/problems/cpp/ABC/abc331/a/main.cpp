#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 入力
  int M, D;
  cin >> M >> D;
  int y, m, d;
  cin >> y >> m >> d;

  // 処理
  int ansY = y, ansM = m, ansD = d; // 初期値を設定
  ansD++;                           // 次の日にする

  if (ansD > D) // 日の比較
  {
    ansD = 1;
    ansM += 1;
  }
  if (ansM > M) // 月の比較
  {
    ansM = 1;
    ansY += 1;
  }

  // 出力
  cout << ansY << " " << ansM << " " << ansD << endl;
  return 0;
}