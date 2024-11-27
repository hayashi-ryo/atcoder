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

  bool ans = false;
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      int target = 1000 - A[i] - A[j];
      // lower_bound を使用して target を配列中で探索
      auto itr = lower_bound(A.begin() + j + 1, A.end(), target); // j以降での探索を効率化
      if (itr != A.end() && *itr == target)
      {
        ans = true;
        break;
      }
    }
    if (ans)
    {
      break;
    }
  }

  if (ans)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
