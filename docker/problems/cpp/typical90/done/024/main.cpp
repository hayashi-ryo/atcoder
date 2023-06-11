#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;

  vector<int> a(N);
  vector<int> b(N);
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < N; i++)
  {
    cin >> b[i];
  }

  int chg = 0;
  for (int i = 0; i < N; i++)
  {
    if (a[i] > b[i])
      chg += (a[i] - b[i]);
    else
      chg += (b[i] - a[i]);
  }

  string ans = "";
  if (chg > K)
  {
    ans = "No";
  }
  else if ((K - chg) % 2 != 0)
  {
    ans = "No";
  }
  else
  {
    ans = "Yes";
  }

  cout << ans << endl;
}