#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int R, G, B;
  string C;
  cin >> R >> G >> B;
  cin >> C;
  int ans = 100;

  if (C == "Red")
  {
    ans = min(G, B);
  }
  else if (C == "Green")
  {
    ans = min(R, B);
  }
  else if (C == "Blue")
  {
    ans = min(R, G);
  }
  cout << ans << endl;
  return 0;
}