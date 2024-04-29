#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  vector<int> stack;

  for (int i = 0; i < N; ++i)
  {
    // 現在のボールをスタックに追加
    int currentBall = A[i];

    // 可能な限りマージを行う
    while (!stack.empty() && stack.back() == currentBall)
    {
      // スタックの最後の2つのボールが等しければ、マージして新しいボールを作る
      stack.pop_back();
      ++currentBall; // 同じボール二つをマージして、次のサイズのボールに
    }

    // 新しいボールをスタックに追加
    stack.push_back(currentBall);
  }

  // 最終的なスタックのサイズが、列にあるボールの数
  cout << stack.size() << endl;

  return 0;
}
