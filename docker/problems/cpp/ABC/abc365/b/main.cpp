#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  vector<int> sortA = A;
  sort(sortA.begin(), sortA.end());
  auto it = find(A.begin(), A.end(), sortA[N - 2]);
  cout << it - A.begin() + 1 << endl;
  return 0;
}