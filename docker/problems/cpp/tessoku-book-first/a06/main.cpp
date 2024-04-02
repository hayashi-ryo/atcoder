#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> NumOfVisitor(N + 1);    // 各日付の来場者数
  vector<int> TotalOfVisitors(N + 1); // 来場者数の累積和
  for (int i = 1; i < N + 1; ++i)
  {
    cin >> NumOfVisitor[i];
  }
  for (int i = 1; i < N + 1; ++i)
  {
    TotalOfVisitors[i] = TotalOfVisitors[i - 1] + NumOfVisitor[i];
  }

  for (int i = 0; i < Q; ++i)
  {
    int L, R;
    cin >> L >> R;
    cout << TotalOfVisitors[R] - TotalOfVisitors[L - 1] << endl;
  }
  return 0;
}