#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
  int N, T;
  cin >> N >> T;

  vector<int> A(T);
  for (int i = 0; i < T; ++i)
  {
    cin >> A[i];
  }

  // 行と列と対角線のカウント
  vector<int> rowCount(N, 0);
  vector<int> colCount(N, 0);
  int diag1Count = 0, diag2Count = 0;

  // マス目に対応する行と列を保存するマップ
  unordered_map<int, pair<int, int>> positionMap;
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      int num = N * i + j + 1;
      positionMap[num] = {i, j};
    }
  }

  // 印をつけてビンゴを判定
  for (int turn = 0; turn < T; ++turn)
  {
    int num = A[turn];
    auto pos = positionMap[num];
    int row = pos.first;
    int col = pos.second;

    // 行、列、対角線のカウントを増やす
    rowCount[row]++;
    colCount[col]++;
    if (row == col)
      diag1Count++;
    if (row + col == N - 1)
      diag2Count++;

    // ビンゴの判定
    if (rowCount[row] == N || colCount[col] == N || diag1Count == N || diag2Count == N)
    {
      cout << turn + 1 << endl;
      return 0;
    }
  }

  // ビンゴを達成しない場合
  cout << -1 << endl;
  return 0;
}
