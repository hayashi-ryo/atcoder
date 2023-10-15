#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, M;

int main()
{
  cin >> N >> M;
  vector<int> A(M);
  for (int i = 0; i < M; i++)
  {
    cin >> A[i];
    A[i]--;
  }
  for (int i = 0; i < N; i++)
  {
    int x = *lower_bound(A.begin(), A.end(), i);
    cout << x - i << endl;
  }
}
