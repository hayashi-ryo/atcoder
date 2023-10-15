#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, X;
int main()
{
  cin >> N >> X;
  vector<int> A(N - 1);
  for (int i = 0; i < N - 1; i++)
  {
    cin >> A[i];
  }

  int ans = -1;
  vector<int> B;

  for (int i = 0; i < 101; i++)
  {
    B = A;
    B.push_back(i);
    sort(B.begin(), B.end());
    int score = 0;
    for (int j = 1; j < N - 1; j++)
    {
      score += B[j];
    }
    if (score >= X)
    {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}