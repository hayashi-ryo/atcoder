#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  vector<int> S(8);
  rep(i, 8) cin >> S[i];
  for (int i = 0; i < 8; i++)
  {
    if (i != 0 && S[i - 1] > S[i])
    {
      cout << "No" << endl;
      return 0;
    }
    if (S[i] % 25 != 0)
    {
      cout << "No" << endl;
      return 0;
    }
    if (S[i] < 100 || 675 < S[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}