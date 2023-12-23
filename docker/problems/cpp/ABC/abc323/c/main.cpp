#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, x) for (int i = 0; i < (x); i++)

int N, M;

int main()
{
  cin >> N >> M;

  // 問題ごとのスコア一覧
  vector<int> points(M);
  rep(i, M) cin >> points[i];
  // プレイヤーの正誤状況
  vector<string> score(N);
  rep(i, N) cin >> score[i];
  // プレイヤの得点状況
  vector<int> getPoints(N);
  rep(i, N) getPoints[i] = (i + 1);

  // 得点を入力
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      if (score[i][j] == 'o')
      {
        getPoints[i] += points[j];
      }
    }
  }

  int mx = *max_element(getPoints.begin(), getPoints.end());
  for (int i = 0; i < N; i++)
  {
    vector<int> unanswered;
    int ans = 0;

    for (int j = 0; j < M; j++)
    {
      if (score[i][j] == 'x')
      {
        unanswered.push_back(points[j]);
      }
    }

    sort(unanswered.rbegin(), unanswered.rend());
    while (getPoints[i] < mx)
    {
      getPoints[i] += unanswered[ans];
      ans++;
    }
    cout << ans << endl;
  }
}