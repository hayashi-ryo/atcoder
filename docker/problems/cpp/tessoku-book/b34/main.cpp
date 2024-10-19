#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  ll X, Y;
  cin >> N >> X >> Y;

  vector<int> grundyNumbers = {1, 1, 2, 0, 0};
  int totalNim = 0;

  for (int i = 0; i < N; ++i)
  {
    ll Ai;
    int grundy = 0;
    cin >> Ai;
    if (Ai < 2)
    {
      grundy = 0;
    }
    else
    {
      int idx = (Ai % 5 + 3) % 5;
      grundy = grundyNumbers[idx];
    }

    totalNim ^= grundy;
  }

  if (totalNim == 0)
  {
    cout << "Second" << endl; // 後手の勝ち
  }
  else
  {
    cout << "First" << endl; // 先手の勝ち
  }
  return 0;
}