#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF (1 << 30)

int main()
{
  int M;
  cin >> M;
  vector<string> S(3);
  rep(i, 3) cin >> S[i];
  int result = INF;
  vector<int> p(3);
  rep(i, 3) p[i] = i;

  for (int i = 0; i < M; i++)
  {
    for (int j = 1; j < M + 1; j++)
    {
      for (int k = 1; k < M + 1; k++)
      {
        do
        {
          char c1, c2, c3;
          c1 = S[p[0]][i];
          c2 = S[p[1]][(i + j) % M];
          c3 = S[p[2]][(i + j + k) % M];
          if ((c1 == c2) && (c2 == c3))
          {
            result = min(result, i + j + k);
          }
        } while (next_permutation(p.begin(), p.end()));
      }
    }
  }
  if (result < INF)
  {
    cout << result << endl;
  }
  else
  {
    cout << -1 << endl;
  }
}
