#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Kの長さの部分文字列が回文であるかどうかをチェックする関数
bool contains_palindrome(const string &str, int K)
{
  int N = str.size();
  // 長さKの部分文字列をチェック
  for (int i = 0; i <= N - K; ++i)
  {
    bool is_palindrome = true;
    // 部分文字列が回文かどうかを確認
    for (int j = 0; j < K / 2; ++j)
    {
      if (str[i + j] != str[i + K - 1 - j])
      {
        is_palindrome = false;
        break;
      }
    }
    if (is_palindrome)
      return true;
  }
  return false;
}

int main()
{
  int N, K;
  string S;

  // 入力を受け取る
  cin >> N >> K >> S;

  // 回文を含まない順列の個数を数える
  int count = 0;
  sort(S.begin(), S.end());
  do
  {
    if (!contains_palindrome(S, K))
    {
      ++count;
    }
  } while (next_permutation(S.begin(), S.end()));

  // 結果を出力
  cout << count << endl;

  return 0;
}
