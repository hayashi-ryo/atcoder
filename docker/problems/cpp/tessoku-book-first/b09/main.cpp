// cumulative_sum is 累積和 in Japanese.
#include <iostream> //standard C++ library that provides facilities for input and output operations.
#define rep(i, n) for (long long i = 0; i < n; i++)

using namespace std;
int N;
int T[1509][1509];

int main()
{
  cin >> N;
  // execute queues.
  rep(i, N)
  {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    T[A][B] += 1;
    T[A][D] -= 1;
    T[C][B] -= 1;
    T[C][D] += 1;
  }
  // 二次元累積和をとる
  for (int i = 0; i <= 1500; i++)
  {
    for (int j = 1; j <= 1500; j++)
      T[i][j] = T[i][j - 1] + T[i][j];
  }
  for (int i = 1; i <= 1500; i++)
  {
    for (int j = 0; j <= 1500; j++)
      T[i][j] = T[i - 1][j] + T[i][j];
  }

  // 面積を数える
  int Answer = 0;
  for (int i = 0; i <= 1500; i++)
  {
    for (int j = 0; j <= 1500; j++)
    {
      if (T[i][j] >= 1)
        Answer += 1;
    }
  }
  cout << Answer << endl;
  return 0;
}