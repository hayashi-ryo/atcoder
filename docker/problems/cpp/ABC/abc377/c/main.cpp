#include <iostream>
#include <set>
#include <vector>

using namespace std;

// ナイトの移動可能な8方向
const vector<pair<int, int>> knight_moves = {
    {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

int main()
{
  // 入力
  long long N;
  int M;
  cin >> N >> M;

  set<pair<int, int>> occupied;   // コマが置かれているマス
  set<pair<int, int>> threatened; // 取られるマス

  // M個のコマの座標を読み込む
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    occupied.insert({a, b});

    // ナイトの移動範囲に基づいて、取られるマスをセットに追加
    for (const auto &move : knight_moves)
    {
      int new_a = a + move.first;
      int new_b = b + move.second;
      // 盤面内に収まっている場合のみ記録
      if (new_a >= 1 && new_a <= N && new_b >= 1 && new_b <= N)
      {
        threatened.insert({new_a, new_b});
      }
    }
  }

  // 取られるマスのうち、コマが置かれているマスは除外
  for (const auto &pos : occupied)
  {
    threatened.erase(pos);
  }

  // 全マス数からコマが置かれているマスと取られるマスを除く
  long long total_cells = N * N;
  long long safe_cells = total_cells - occupied.size() - threatened.size();

  // 結果を出力
  cout << safe_cells << endl;

  return 0;
}
