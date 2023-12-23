#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int cells[9];
  rep(i, 9) cin >> cells[i];

  vector<int> order(9);              // i番目のセルを何番目に開けるか
  iota(begin(order), end(order), 0); // 0-9の値を投入
  int result = 0;                    // がっかりしない総数
  int total = 0;                     // 開け方の総数

  vector<tuple<int, int, int>> row{
      {0, 1, 2}, // 1行目
      {3, 4, 5}, // 2行目
      {6, 7, 8}, // 3行目
      {0, 3, 6}, // 1列目
      {1, 4, 7}, // 2列目
      {2, 5, 8}, // 3列目
      {0, 4, 8}, // 左上から
      {2, 4, 6}  // 右上から
  };

  do
  {
    total++;
    bool disappointedFlag = false;
    for (auto &&[a, b, c] : row)
      if (cells[a] == cells[b] && order[a] < order[c] && order[b] < order[c])
      {
        disappointedFlag = true;
      }
      else if (cells[b] == cells[c] && order[b] < order[a] && order[c] < order[a])
      {
        disappointedFlag = true;
      }
      else if (cells[a] == cells[c] && order[a] < order[b] && order[c] < order[b])
      {
        disappointedFlag = true;
      }
    if (!disappointedFlag)
    {
      result++;
    }

  } while (next_permutation(order.begin(), order.end()));

  cout << setprecision(15);
  cout << (double)result / total << endl;
}