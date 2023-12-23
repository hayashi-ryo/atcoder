#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N;
string S;

int main()
{
  cin >> N >> S;
  int ans = -1;
  for (int i = 0; i < N - 2; i++)
  {
    if (S.substr(i, 3) == "ABC")
    {
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;
}