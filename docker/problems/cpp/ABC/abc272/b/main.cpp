#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> Nlist(N);
  for (int i = 0; i < N; i++)
  {
    int k = 0;
    for (int j = 0; j < k; j++)
    {
      int x;
      cin >> x;
      Nlist[x - 1] += 1;
    }
    cout << Nlist[i] << endl;
  }
  bool flag = true;
  for (int i = 0; i < N; i++)
  {
    if (Nlist[i] < 2)
    {
      cout << "test " << Nlist[i] << endl;
      flag = false;
    }
  }
  if (flag)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}