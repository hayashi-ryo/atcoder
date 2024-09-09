#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  int maxLength = 0;
  rep(i, N) maxLength = max(maxLength, (int)S[i].size());
  vector<string> T(maxLength, string(N, '*'));

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < (int)S[i].size(); j++)
    {
      T[j][N - i - 1] = S[i][j];
    }
  }

  for (int i = 0; i < maxLength; i++)
  {
    while (T[i].back() == '*')
    {
      T[i].pop_back();
    }
    cout << T[i] << endl;
  }

  return 0;
}