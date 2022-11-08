#include <bits/stdc++.h>
using namespace std;
int main()
{
  string S;
  cin >> S;
  int ans = -1;
  int size = S.size();
  for (int i = size; i > -1; i--)
  {
    if (S[i] == 'a')
    {
      ans = i + 1;
      break;
    }
  }
  cout << ans << endl;
}