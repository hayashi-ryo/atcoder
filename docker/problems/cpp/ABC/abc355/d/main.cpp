#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<pair<int, int>> intervals(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> intervals[i].first >> intervals[i].second;
  }

  // 区間の始点と終点を記録
  vector<pair<int, int>> events;
  for (const auto &interval : intervals)
  {
    events.emplace_back(interval.first, 1);   // 始点を +1 として記録
    events.emplace_back(interval.second, -1); // 終点を -1 として記録
  }

  // 始点と終点をソート
  sort(events.begin(), events.end(), [](const pair<int, int> &a, const pair<int, int> &b)
       {
        if (a.first != b.first) return a.first < b.first;
        return a.second > b.second; });
  long long intersectCount = 0;
  long long activeIntervals = 0;

  // イベントを順に処理
  for (const auto &event : events)
  {
    if (event.second == 1)
    {
      // 始点の場合、現在のアクティブな区間の数だけ新しい共通部分ができる
      intersectCount += activeIntervals;
      activeIntervals++;
    }
    else
    {
      // 終点の場合、アクティブな区間の数を減らす
      activeIntervals--;
    }
  }

  cout << intersectCount << endl;
  return 0;
}
