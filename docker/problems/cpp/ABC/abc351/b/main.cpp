#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<string> A(N);
  vector<string> B(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++)
  {
    cin >> B[i];
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (A[i][j] != B[i][j])
      {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }
  return 0;
}