#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool check(int x1, int x2, int x3, int x4)
{
  if (max(x1, x2) < min(x3, x4))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  vector<int> C1(6), C2(6);
  rep(i, 6) cin >> C1[i];
  rep(i, 6) cin >> C2[i];

  if (check(C1[0], C2[0], C1[3], C2[3]) && check(C1[1], C2[1], C1[4], C2[4]) && check(C1[2], C2[2], C1[5], C2[5]))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}