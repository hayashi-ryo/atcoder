#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> H(N);
  rep(i, N) cin >> H[i];
  int mostLeftBuilding = H[0];
  for (int i = 1; i < N; i++)
  {
    if (mostLeftBuilding < H[i])
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  ;

  return 0;
}