#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int maxH = 0, ans = 0;
  for (int i = 0; i < N; i++)
  {
    int H = 0;
    cin >> H;
    maxH = max(maxH, H);
    if (maxH == H)
    {
      ans = i + 1;
    }
  }
  cout << ans << endl;
}