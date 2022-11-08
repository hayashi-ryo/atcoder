#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A_odd;
  vector<int> A_even;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
      A_even.push_back(a);
    }
    else
    {
      A_odd.push_back(a);
    }
  }
  sort(A_even.rbegin(), A_even.rend());
  sort(A_odd.rbegin(), A_odd.rend());
  int ans = -1;
  if (A_even.size() >= 2)
  {
    ans = max(ans, A_even[0] + A_even[1]);
  }
  if (A_odd.size() >= 2)
  {
    ans = max(ans, A_odd[0] + A_odd[1]);
  }
  cout << ans << endl;
}