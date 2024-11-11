#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<long long> S(N + 2, 0); // 1-based indexing
  long long total_stones = 0;
  for (int i = 0; i < M; ++i)
  {
    int Xi;
    long long Ai;
    cin >> Xi >> Ai;
    S[Xi] += Ai;
    total_stones += Ai;
  }

  if (total_stones != N)
  {
    cout << -1 << endl;
    return 0;
  }

  long long total_moves = 0;
  for (int i = 1; i <= N; ++i)
  {
    if (S[i] >= 1)
    {
      long long surplus = S[i] - 1;
      total_moves += surplus;
      S[i + 1] += surplus;
    }
    else
    {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << total_moves << endl;
  return 0;
}
