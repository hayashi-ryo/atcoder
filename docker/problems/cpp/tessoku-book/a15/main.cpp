#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), T(N), ans(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    T[i] = A[i];
  }
  sort(T.begin(), T.end());
  T.erase(unique(T.begin(), T.end()), T.end());
  for (int i = 0; i < N; i++)
  {
    ans[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
    ans[i]++;
  }

  for (int i = 0; i < N; i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << ans[i];
  }
  cout << endl;
  return 0;
}