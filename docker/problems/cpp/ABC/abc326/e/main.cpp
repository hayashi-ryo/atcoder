#include <iostream>
#include <vector>

const int MOD = 998244353;

int main()
{
  int N;
  std::cin >> N;
  std::vector<int> A(N + 1, 0);

  // 計算用の配列を初期化
  std::vector<long long> probabilities(N + 1, 0);
  std::vector<long long> expectations(N + 1, 0);

  // 各目の出現確率を計算
  for (int i = 1; i <= N; ++i)
  {
    probabilities[i] = (long long)1 * i * (N - i + 1);
    expectations[i] = (probabilities[i] * i);
  }

  // 答えを計算
  long long answer = 0;
  for (int i = 1; i <= N; ++i)
  {
    answer = (answer + expectations[i]);
  }

  std::cout << answer % MOD << std::endl;
  return 0;
}
