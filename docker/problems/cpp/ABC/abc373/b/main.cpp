#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  vector<int> position(26);
  for (int i = 0; i < 26; ++i)
  {
    position[S[i] - 'A'] = i;
  }

  // 最初の位置は 'A' の場所
  int currentPos = position[0]; // 'A'の位置
  int totalDistance = 0;        // 合計移動距離

  // 'B' から 'Z' まで順に移動していく
  for (char c = 'B'; c <= 'Z'; ++c)
  {
    int nextPos = position[c - 'A'];            // 次の文字の位置
    totalDistance += abs(nextPos - currentPos); // 移動距離を足す
    currentPos = nextPos;                       // 現在の位置を更新
  }

  // 結果を出力
  cout << totalDistance << endl;
  return 0;
}