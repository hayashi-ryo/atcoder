#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool compareBox(const pair<int, int> &a, const pair<int, int> &b)
{
  if (a.first == b.first)
  {
    return a.second > b.second;
  }
  return a.first < b.first;
}

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> box(N);
  rep(i, N) cin >> box[i].first >> box[i].second;

  // 箱を縦の長さで昇順にソート
  // もし縦の長さが同じ場合は、横の長さの降順でソート
  sort(box.begin(), box.end(), compareBox);

  vector<int> LIS;
  for (int i = 0; i < N; i++)
  {
    int width = box[i].second;
    auto it = lower_bound(LIS.begin(), LIS.end(), width);
    if (it == LIS.end())
    {
      LIS.push_back(width);
    }
    else
    {
      LIS[it - LIS.begin()] = width;
    }
  }

  cout << (int)LIS.size() << endl;
  return 0;
}