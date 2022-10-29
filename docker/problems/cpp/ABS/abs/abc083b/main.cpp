#include <bits/stdc++.h>
using namespace std;
int ketasum(int N)
{
  int ketasum = 0;
  for (int i = to_string(ketasum).length(); i > -1; i--)
  {
    ketasum += N / 10 ^ (i - 1);
    cout << i << ":" << ketasum;
  }
  return ketasum;
}
int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  int ans = 0;
  // cout << "10:" << ketasum(10);
  for (int i = 1; i < N + 1; i++)
  {
    if (A <= ketasum(i) && ketasum(i) <= B)
    {
      ans++;
    }
  }
  cout << ans << endl;
}