#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int D, N;
  cin >> D >> N;
  vector<int> list(D + 10);
  vector<int> sumList(D + 10);
  rep(i, D) list[i] = 0;
  for (int i = 0; i < N; i++)
  {
    int L, R;
    cin >> L >> R;
    list[L - 1] += 1;
    list[R] -= 1;
  }
  sumList[0] = list[0];
  for (int i = 1; i < D; i++)
  {
    sumList[i] = sumList[i - 1] + list[i];
  }
  for (int i = 0; i < D; i++)
  {
    cout << sumList[i] << endl;
  }
  return 0;
}