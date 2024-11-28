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

  string ans = "No";
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      auto it = find(A.begin() + j, A.end(), 1000 - A[i] - A[j]);
      if (it != A.end())
      {
        ans = "Yes";
      }
    }
  }

  cout << ans << endl;
  return 0;
}