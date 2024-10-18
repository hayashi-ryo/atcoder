#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, K;
  cin >> N >> K;
  vector<pair<int, int>> drug(N);
  ll takeDrug = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> drug[i].first >> drug[i].second;
    takeDrug += drug[i].second;
  }
  sort(drug.begin(), drug.end());
  if (takeDrug <= K)
  {
    cout << 1 << endl;
    return 0;
  }
  for (int i = 0; i < N; i++)
  {
    takeDrug -= drug[i].second;
    if (takeDrug <= K)
    {
      cout << drug[i].first + 1 << endl;
      break;
    }
  }

  return 0;
}