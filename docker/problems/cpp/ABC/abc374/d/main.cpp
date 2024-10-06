#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

double distance(double x1, double y1, double x2, double y2)
{
  return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
  int N, S, T;
  cin >> N >> S >> T;

  vector<pair<pair<double, double>, pair<double, double>>> segments(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> segments[i].first.first >> segments[i].first.second;   // A_i, B_i
    cin >> segments[i].second.first >> segments[i].second.second; // C_i, D_i
  }

  // すべての線分を印字するための最小時間
  double min_time = 1e9;

  // 線分の順番をすべて試す
  vector<int> indices(N);
  for (int i = 0; i < N; ++i)
    indices[i] = i;

  do
  {
    // 順番が決まったので、線分の両端のどちらを始点にするかを試す
    for (int start_mask = 0; start_mask < (1 << N); ++start_mask)
    {
      double current_time = 0;
      double current_x = 0, current_y = 0;

      for (int i = 0; i < N; ++i)
      {
        int idx = indices[i];

        // 始点と終点を選択
        double ax, ay, bx, by;
        if (start_mask & (1 << i))
        {
          ax = segments[idx].first.first;
          ay = segments[idx].first.second;
          bx = segments[idx].second.first;
          by = segments[idx].second.second;
        }
        else
        {
          ax = segments[idx].second.first;
          ay = segments[idx].second.second;
          bx = segments[idx].first.first;
          by = segments[idx].first.second;
        }

        // 現在の位置から印字開始点までの移動時間（レーザ照射なし）
        current_time += distance(current_x, current_y, ax, ay) / S;

        // 線分の印字時間（レーザ照射あり）
        current_time += distance(ax, ay, bx, by) / T;

        // 印字が終わった位置を更新
        current_x = bx;
        current_y = by;
      }

      // 最小時間を更新
      min_time = min(min_time, current_time);
    }
  } while (next_permutation(indices.begin(), indices.end()));

  // 答えを出力（誤差10^-6以下であれば正解）
  cout << fixed << min_time << endl;
  return 0;
}