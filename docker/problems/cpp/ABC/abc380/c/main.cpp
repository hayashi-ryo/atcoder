#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  // 入力を受け取る
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;

  // 1 の塊の開始位置と終了位置を記録する
  vector<pair<int, int>> blocks;
  int start = -1;

  for (int i = 0; i < N; ++i)
  {
    if (S[i] == '1')
    {
      if (start == -1)
      {
        start = i; // 新しい塊の開始位置を記録
      }
    }
    else
    {
      if (start != -1)
      {
        blocks.push_back({start, i - 1}); // 塊を記録
        start = -1;
      }
    }
  }
  // 最後の塊を追加
  if (start != -1)
  {
    blocks.push_back({start, N - 1});
  }

  // K-1番目とK番目の塊の位置を取得
  int l1 = blocks[K - 2].first, r1 = blocks[K - 2].second;
  int l2 = blocks[K - 1].first, r2 = blocks[K - 1].second;

  // 新しい文字列を構築
  string T(N, '0'); // 全て '0' の文字列を初期化
  // K-1 番目までの塊をコピー
  for (int i = 0; i <= r1; ++i)
  {
    T[i] = S[i];
  }
  // K 番目の塊を K-1 番目の塊の直後に移動
  int new_pos = r1 + 1; // 移動先の開始位置
  for (int i = l2; i <= r2; ++i)
  {
    T[new_pos++] = '1';
  }
  // 残りの部分をコピー
  for (int i = r2 + 1; i < N; ++i)
  {
    T[i] = S[i];
  }

  // 結果を出力
  cout << T << endl;

  return 0;
}
