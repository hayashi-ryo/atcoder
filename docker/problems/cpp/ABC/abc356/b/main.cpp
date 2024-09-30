#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;

  vector<int> A(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> A[i];
  }

  vector<int> total(M, 0);
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < M; ++j)
    {
      int X;
      cin >> X;
      total[j] += X;
    }
  }

  bool goalAchieved = true;
  for (int i = 0; i < M; ++i)
  {
    if (total[i] < A[i])
    {
      goalAchieved = false;
      break;
    }
  }

  if (goalAchieved)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}