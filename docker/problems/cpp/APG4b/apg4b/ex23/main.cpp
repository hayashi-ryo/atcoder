#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  map<int, int> Amap;
  for (int i = 0; i < N; i++)
  {
    int A;
    cin >> A;
    Amap[A]++;
  }
  int ans = 0;
  for (auto A : Amap)
  {
    if (A.second > Amap[ans])
    {
      ans = A.first;
    }
  }
  cout << ans << " " << Amap[ans] << endl;
}