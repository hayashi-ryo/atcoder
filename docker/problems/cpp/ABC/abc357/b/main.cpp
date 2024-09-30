#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  int upperCharCnt = 0, lowerCharCnt = 0;
  for (auto c : S)
  {
    if (isupper(c))
    {
      upperCharCnt++;
    }
    else
    {
      lowerCharCnt++;
    }
  }

  string ans = S;
  if (upperCharCnt > lowerCharCnt)
  {
    transform(ans.begin(), ans.end(), ans.begin(), [](unsigned char c)
              { return toupper(c); });
  }
  else
  {
    transform(ans.begin(), ans.end(), ans.begin(), [](unsigned char c)
              { return tolower(c); });
  }
  cout << ans << endl;
  return 0;
}