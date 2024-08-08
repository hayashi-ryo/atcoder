#include <bits/stdc++.h>
#include <atcoder/modint>

using namespace std;
using namespace atcoder;
using mint = modint998244353;

int main()
{
  long long n, x;
  mint r = 1;

  cin >> n;
  x = n;
  while (x)
  {
    x /= 10;
    r *= mint(10);
  }

  mint ans = mint(n) * (r.pow(n) - mint(1)) * ((r - mint(1)).inv());
  cout << (ans.val()) << endl;
  return 0;
}
