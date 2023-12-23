#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    int a = 0;
    cin >> a;
    ans += a;
  }
  cout << ans << endl;
}