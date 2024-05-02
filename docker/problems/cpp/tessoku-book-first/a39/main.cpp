#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int N, L[300009], R[300009];
vector<pair<int, int>> tmp;

int main()
{
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cin >> L[i] >> R[i];
    tmp.push_back(make_pair(R[i], L[i]));
  }

  sort(tmp.begin(), tmp.end());
  for (int i = 1; i <= N; i++)
  {
    R[i] = tmp[i - 1].first;
    L[i] = tmp[i - 1].second;
  }

  // 終了時間の早いものを貪欲法でとっていく
  int nowTime = 0, ans = 0;
  for (int i = 1; i <= N; i++)
  {
    if (nowTime <= L[i])
    {
      nowTime = R[i];
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}