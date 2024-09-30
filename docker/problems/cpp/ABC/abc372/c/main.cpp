#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, Q;
  string S;
  cin >> N >> Q >> S;
  int ans = 0;
  for (int i = 0; i < (int)S.size() - 2; i++)
  {
    if (S.substr(i, 3) == "ABC")
    {
      ++ans;
    }
  }

  for (int i = 0; i < Q; i++)
  {
    int X;
    char C;
    cin >> X >> C;
    --X;
    // 減少分
    if (2 <= X && S.substr(X - 2, 3) == "ABC")
    {
      --ans;
    }
    if (1 <= X && S.substr(X - 1, 3) == "ABC")
    {
      --ans;
    }
    if (S.substr(X, 3) == "ABC")
    {
      --ans;
    }

    S[X] = C;

    // 増加分
    if (2 <= X && S.substr(X - 2, 3) == "ABC")
    {
      ++ans;
    }
    if (1 <= X && S.substr(X - 1, 3) == "ABC")
    {
      ++ans;
    }
    if (S.substr(X, 3) == "ABC")
    {
      ++ans;
    }
    cout << ans << endl;
  }

  return 0;
}