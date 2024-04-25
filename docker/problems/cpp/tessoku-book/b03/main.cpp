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
  sort(A.begin(), A.end());
  string ans = "No";
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      for (int k = j + 1; k < N; k++)
      {
        if (A[i] + A[j] + A[k] == 1000)
        {
          ans = "Yes";
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}