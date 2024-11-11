#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main()
{
  // 入力の高速化
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N;
  cin >> N;
  string S;
  cin >> S;

  // 高精度整数型を定義
  cpp_int total = 0;
  cpp_int factor = 1;
  cpp_int ten = 10;

  // 各桁の貢献度を計算
  for (int i = N - 1; i >= 0; --i)
  {
    int num = S[i] - '0';
    cpp_int contribution = factor * num * (i + 1);
    total += contribution;
    factor *= ten;
  }

  cout << total << endl;

  return 0;
}
