#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> count(N);
  vector<vector<int>> point(N);
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    // di のカウント追加
    count[a - 1]++;
    count[b - 1]++;
    // 接続先の追加
    point[a - 1].push_back(b - 1);
    point[b - 1].push_back(a - 1);
  }
  for (int i = 0; i < N; i++)
  {
    // diのカウントを出力
    cout << count[i];
    // 接続先を出力
    sort(point[i].begin(), point[i].end());
    for (int j = 0; j < point[i].size(); j++)
    {
      cout << " " << point[i][j] + 1;
    }
    cout << endl;
  }
}