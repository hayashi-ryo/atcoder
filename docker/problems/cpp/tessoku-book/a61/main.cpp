#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> glaph[N];
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    glaph[a - 1].push_back(b - 1);
    glaph[b - 1].push_back(a - 1);
  }
  for (int i = 0; i < N; i++)
  {
    cout << i + 1 << ": {";
    for (int j = 0; j < glaph[i].size(); j++)
    {
      if (j != 0)
      {
        cout << ", ";
      }
      cout << glaph[i][j] + 1;
    }

    cout << "}" << endl;
  }

  return 0;
}