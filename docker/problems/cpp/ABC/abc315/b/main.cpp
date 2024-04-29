#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int M, total = 0, mid = 0;
  cin >> M;
  vector<int> Day(M);
  for (int i = 0; i < M; i++)
  {
    cin >> Day[i];
    total += Day[i];
  }
  mid = (total + 1) / 2;

  for (int i = 0; i < M; i++)
  {
    if (mid <= Day[i])
    {
      cout << i + 1 << " " << mid << endl;
      break;
    }
    else
    {
      mid -= Day[i];
    }
  }
  return 0;
}