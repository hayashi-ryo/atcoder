#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  vector<int> presents(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> presents[i];
  }

  sort(presents.begin(), presents.end()); // プレゼントの座標を昇順でソート

  int left = 0, right = 0; // 半開区間[x, x+M)の左端と右端を指すポインタ
  int maxPresents = 0;
  while (right < N)
  {
    // 半開区間[x, x+M)に含まれるプレゼントの数を数える
    while (presents[right] - presents[left] >= M)
    {
      ++left;
    }
    maxPresents = max(maxPresents, right - left + 1); // 最大のプレゼント数を更新
    ++right;                                          // 右端のポインタを移動
  }

  cout << maxPresents << endl; // 結果を出力
  return 0;
}
