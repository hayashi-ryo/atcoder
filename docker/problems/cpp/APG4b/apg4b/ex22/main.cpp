#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> p(N);
  for (int i = 0; i < N; i++)
  {
    int a, b;
    cin >> a >> b;
    p[i].first = b;
    p[i].second = a;
  }
  sort(p.begin(), p.end());
  for (auto pair : p)
  {
    cout << pair.second << " " << pair.first << endl;
  }
}