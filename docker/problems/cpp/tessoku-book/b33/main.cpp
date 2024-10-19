#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  ll H, W;
  cin >> N >> H >> W;
  vector<pair<ll, ll>> pieces(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> pieces[i].first >> pieces[i].second;
  }

  ll totalNimber = 0;
  for (int i = 0; i < N; ++i)
  {
    ll nimber = (pieces[i].first - 1) ^ (pieces[i].second - 1);
    totalNimber ^= nimber;
  }

  if (totalNimber == 0)
  {
    cout << "Second" << endl; // 後手の勝ち
  }
  else
  {
    cout << "First" << endl; // 先手の勝ち
  }

  return 0;
}