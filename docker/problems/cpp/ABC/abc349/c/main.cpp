#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S, T;
  cin >> S >> T;
  transform(S.begin(), S.end(), S.begin(), ::toupper);
  // 最後の文字がXであるかを判定
  bool Xflag = true;
  if (T[2] == 'X')
  {
    Xflag = true;
  }
  else
  {
    Xflag = false;
  }

  // TがSの部分文字列であるか判定
  string ans = "No";
  int i = 0, j = 0;
  while (i < S.length())
  {
    if (S[i] == T[j])
    {
      j++;
    }
    if (Xflag == true && j == 2)
    {
      ans = "Yes";
      break;
    }
    else if (Xflag == false && j == 3)
    {
      ans = "Yes";
      break;
    }
    i++;
  }
  cout << ans << endl;
  return 0;
}