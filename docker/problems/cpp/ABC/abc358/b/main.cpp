#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, A;
  cin >> N >> A;
  vector<int> time(N);
  rep(i, N) cin >> time[i];
  int nowTime = 0;
  for (int i = 0; i < N; i++)
  {
    if (nowTime < time[i]) // 誰も並んでいない場合
    {
      nowTime = time[i] + A;
      cout << nowTime << endl;
    }
    else
    { // 並んでいる人がいる場合
      nowTime += A;
      cout << nowTime << endl;
    }
  }
  return 0;
}