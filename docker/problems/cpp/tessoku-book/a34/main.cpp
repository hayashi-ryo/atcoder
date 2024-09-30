#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, X, Y;
  cin >> N >> X >> Y;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<int> grundy(100009, 0);
  for (int i = 0; i < 100009; i++)
  {
    vector<bool> transit(3, false);

    if (i >= X)
    {
      transit[grundy[i - X]] = true;
    }
    if (i >= Y)
    {
      transit[grundy[i - Y]] = true;
    }

    if (transit[0] == false)
    {
      grundy[i] = 0;
    }
    else if (transit[1] == false)
    {
      grundy[i] = 1;
    }
    else
    {
      grundy[i] = 2;
    }
  }

  int XOR_SUM = grundy[A[0]];
  for (int i = 1; i < N; ++i)
  {
    XOR_SUM = (XOR_SUM ^ grundy[A[i]]);
  }
  if (XOR_SUM != 0)
  {
    cout << "First" << endl;
  }
  else
  {
    cout << "Second" << endl;
  }
  return 0;
}