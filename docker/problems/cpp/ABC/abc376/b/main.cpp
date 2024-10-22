#include <bits/stdc++.h>
using namespace std;

// 時計回りの経路上にブロック（他方の手）があるかを確認する関数
bool is_on_clockwise_path(int N, int start, int target, int block)
{
  if (start == block || target == block)
    return false;
  int dist_start_to_target = (target - start + N) % N;
  if (dist_start_to_target == 0)
    return false;
  int dist_start_to_block = (block - start + N) % N;
  if (dist_start_to_block == 0)
    return false;
  return dist_start_to_block < dist_start_to_target;
}

// 反時計回りの経路上にブロック（他方の手）があるかを確認する関数
bool is_on_counterclockwise_path(int N, int start, int target, int block)
{
  if (start == block || target == block)
    return false;
  int dist_start_to_target = (start - target + N) % N;
  if (dist_start_to_target == 0)
    return false;
  int dist_start_to_block = (start - block + N) % N;
  if (dist_start_to_block == 0)
    return false;
  return dist_start_to_block < dist_start_to_target;
}

int main()
{
  int N, Q;
  cin >> N >> Q;

  // 初期状態: 左手はパーツ1、右手はパーツ2を握っている
  int left_hand = 1;
  int right_hand = 2;
  int total_moves = 0;

  for (int i = 0; i < Q; ++i)
  {
    char hand;
    int target;
    cin >> hand >> target;

    if (hand == 'L')
    {
      int start = left_hand;
      int block = right_hand;

      // 時計回りの距離とブロックの有無を確認
      int dist_cw = (target - start + N) % N;
      bool blocked_cw = is_on_clockwise_path(N, start, target, block);

      // 反時計回りの距離とブロックの有無を確認
      int dist_ccw = (start - target + N) % N;
      bool blocked_ccw = is_on_counterclockwise_path(N, start, target, block);

      int min_dist = INT_MAX;
      if (!blocked_cw)
        min_dist = min(min_dist, dist_cw);
      if (!blocked_ccw)
        min_dist = min(min_dist, dist_ccw);

      total_moves += min_dist;
      left_hand = target;
    }
    else if (hand == 'R')
    {
      int start = right_hand;
      int block = left_hand;

      int dist_cw = (target - start + N) % N;
      bool blocked_cw = is_on_clockwise_path(N, start, target, block);

      int dist_ccw = (start - target + N) % N;
      bool blocked_ccw = is_on_counterclockwise_path(N, start, target, block);

      int min_dist = INT_MAX;
      if (!blocked_cw)
        min_dist = min(min_dist, dist_cw);
      if (!blocked_ccw)
        min_dist = min(min_dist, dist_ccw);

      total_moves += min_dist;
      right_hand = target;
    }
  }

  cout << total_moves << endl;

  return 0;
}
