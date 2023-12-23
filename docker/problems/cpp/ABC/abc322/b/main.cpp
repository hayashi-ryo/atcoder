#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, M;
string S, T;

int main()
{
  /*
  SがTの接頭辞 && SがTの接尾辞 -> 0
  SがTの接頭辞 && SがTの接尾辞ではない -> 1
  SがTの接頭辞ではない && SがTの接尾辞 -> 2
  SがTの接頭辞ではない && SがTの接尾辞ではない -> 3
  */
  cin >> N >> M >> S >> T;
  int ans = 3;
  if (T.substr(0, N) == S)
  {
    ans -= 2;
  }
  if (T.substr(M - N, N) == S)
  {
    ans -= 1;
  }
  cout << ans << endl;
}