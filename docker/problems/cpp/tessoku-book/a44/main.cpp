#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N);
  rep(i, N) A[i] = i + 1;
  int reverse = 0;
  for (int i = 0; i < Q; i++)
  {
    int q, x, y;
    cin >> q;
    if (q == 1)
    {
      cin >> x >> y;
      x--;
      if (reverse % 2 == 0)
        A[x] = y;
      if (reverse % 2 == 1)
        A[N - 1 - x] = y;
    }
    else if (q == 2)
    {
      ++reverse;
    }
    else if (q == 3)
    {
      cin >> x;
      --x;
      if (reverse % 2 == 0)
      {
        cout << A[x] << endl;
      }
      else
      {
        cout << A[N - 1 - x] << endl;
      }
    }
  }

  return 0;
}