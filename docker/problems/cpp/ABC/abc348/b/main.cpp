#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> X(N), Y(N), ans(N, 0);
  vector<double> R(N, 0);
  for (int i = 0; i < N; i++)
  {
    cin >> X[i] >> Y[i];
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      double dist = sqrt(pow((X[i] - X[j]), 2) + pow((Y[i] - Y[j]), 2));
      // cout << X[i] << Y[i] << X[j] << Y[j] << endl;
      // cout << "i:" << i << ", j:" << j << ",dist: " << dist << endl;
      if (R[i] < dist)
      {
        R[i] = dist;
        //  cout << R[i] << endl;
        ans[i] = j + 1;
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    cout << ans[i] << endl;
  }
  return 0;
}