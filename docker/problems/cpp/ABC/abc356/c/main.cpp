#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M, K;
  cin >> N >> M >> K;

  vector<vector<int>> tests(M);
  vector<char> results(M);

  for (int i = 0; i < M; ++i)
  {
    int C;
    cin >> C;
    tests[i].resize(C);
    for (int j = 0; j < C; ++j)
    {
      cin >> tests[i][j];
      tests[i][j]--; // 0-indexed for easier manipulation
    }
    cin >> results[i];
  }

  int valid_combinations = 0;

  for (int mask = 0; mask < (1 << N); ++mask)
  {
    bool is_valid = true;

    for (int i = 0; i < M && is_valid; ++i)
    {
      int correct_keys = 0;
      for (int j : tests[i])
      {
        if (mask & (1 << j))
        {
          correct_keys++;
        }
      }
      if ((results[i] == 'o' && correct_keys < K) || (results[i] == 'x' && correct_keys >= K))
      {
        is_valid = false;
      }
    }

    if (is_valid)
    {
      valid_combinations++;
    }
  }

  cout << valid_combinations << endl;

  return 0;
}