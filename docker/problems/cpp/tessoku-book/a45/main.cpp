#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  char C;
  string A;
  cin >> N >> C >> A;

  int score = 0;
  for (int i = 0; i < N; i++)
  {
    if (A[i] == 'W')
      score += 0;
    if (A[i] == 'B')
      score += 1;
    if (A[i] == 'R')
      score += 2;
  }

  if (
      (score % 3 == 0 && C == 'W') ||
      (score % 3 == 1 && C == 'B') ||
      (score % 3 == 2 && C == 'R'))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}