#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  // 部分和を準備して実装する
  int N, Q;
  string S;
  cin >> N >> Q >> S;
  vector<int> l(Q + 1);
  vector<int> r(Q + 1);
  for (int i = 1; i <= Q; i++)
  {
    cin >> l[i] >> r[i];
  }

  // 部分和を計算
  vector<int> partSumS(N + 1, 0);
  for (int i = 1; i < N; i++)
  {
    int up = 0;
    if (S[i] == S[i - 1])
      up++;
    partSumS[i + 1] = partSumS[i] + up;
  }

  for (int i = 1; i <= Q; i++)
  {
    cout << partSumS[r[i]] - partSumS[l[i]] << endl;
  }
  return 0;
}