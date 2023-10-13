#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, M;

int main()
{
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < M; i++)
  {
    int fire = 0;
    cin >> fire;
    A.at(fire - 1) = 1;
  }

  for (int i = 0; i < N; i++)
  {
    int flag = 0;
    for (int j = i; j < N; j++)
    {
      if (flag > 0)
      {
        cout << flag << endl;
        break;
      }
      if (A.at(j) == 1)
      {
        flag = j - i;
        cout << j - i << endl;
        break;
      }
    }
    flag--;
  }
}
