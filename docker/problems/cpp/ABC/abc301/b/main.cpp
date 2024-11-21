#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)
#define rep1(i, x) for (int i = 1; i <= (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  vector<int> ans;
  ans.push_back(A[0]);

  for (int i = 1; i < N; i++)
  {
    int diff = abs(A[i - 1] - A[i]);
    if (diff == 1)
    {
      ans.push_back(A[i]);
    }
    else if (A[i - 1] > A[i])
    {
      int cnt = 0;
      while (cnt < diff)
      {
        ans.push_back(A[i - 1] - 1 - cnt);
        ++cnt;
      }
    }
    else if (A[i - 1] < A[i])
    {
      int cnt = 0;
      while (cnt < diff)
      {
        ans.push_back(A[i - 1] + 1 + cnt);
        ++cnt;
      }
    }
  }

  for (int i = 0; i < (int)ans.size(); i++)
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