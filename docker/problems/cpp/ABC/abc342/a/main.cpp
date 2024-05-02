#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  /*
  方針
    三文字目までは無条件で判定し、同じ文字を求めておく
  */
  char a;
  if (S[0] == S[1] && S[1] == S[2])
  {
    a = S[0]; // この文字と異なるものが文字列に現れたらiを出力する
    for (int i = 3; i < S.length(); i++)
    {
      if (S[i] != a)
      {
        cout << i + 1 << endl;
        return 0;
      }
    }
  }
  else if (S[0] == S[1])
  {
    cout << 3 << endl;
    return 0;
  }
  else if (S[0] == S[2])
  {
    cout << 2 << endl;
    return 0;
  }
  else if (S[1] == S[2])
  {
    cout << 1 << endl;
    return 0;
  }
  int ans = 0;

  return 0;
}