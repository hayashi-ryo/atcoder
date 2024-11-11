#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int Q;
  cin >> Q;
  vector<long long> planting_times;
  long long accumulated_time = 0;
  int harvested_index = 0;
  vector<int> answers;

  for (int i = 0; i < Q; ++i)
  {
    int query_type;
    cin >> query_type;
    if (query_type == 1)
    {
      // 植物を植える
      planting_times.push_back(accumulated_time);
    }
    else if (query_type == 2)
    {
      // T日待つ
      long long T;
      cin >> T;
      accumulated_time += T;
    }
    else if (query_type == 3)
    {
      // 高さがH以上の植物を収穫
      long long H;
      cin >> H;
      long long threshold = accumulated_time - H;
      auto it = upper_bound(planting_times.begin() + harvested_index, planting_times.end(), threshold);
      int idx = it - planting_times.begin();
      int cnt = idx - harvested_index;
      harvested_index = idx;
      answers.push_back(cnt);
    }
  }

  for (int ans : answers)
  {
    cout << ans << endl;
  }

  return 0;
}
