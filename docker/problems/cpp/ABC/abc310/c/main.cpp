#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  unordered_set<string> seen; // 記録された棒の種類を管理するセット
  for (int i = 0; i < N; i++)
  {
    string s;
    cin >> s;
    string rev_s = s; // 反転した文字列を作成
    reverse(rev_s.begin(), rev_s.end());

    // 文字列が既に存在するか、その反転が存在するかを確認
    if (seen.count(s) == 0 && seen.count(rev_s) == 0)
    {
      seen.insert(s); // 新しい種類の棒をセットに追加
    }
  }

  cout << seen.size() << endl; // 異なる棒の種類の数を出力
  return 0;
}
