#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S, T;
  cin >> S >> T;
  vector<string> X;
  int N = (int)S.size();
  while (S != T)
  {
    string next(N, 'z'); // 長さNで全てzの文字列を生成する。
    for (int i = 0; i < N; i++)
    {
      if (S[i] != T[i])
      {
        string tmpS = S;
        tmpS[i] = T[i]; // S_iだけT_iに変換した文字列を生成
        next = min(next, tmpS);
      }
    }
    X.push_back(next);
    S = next;
  }

  cout << (int)X.size() << endl;
  for (auto s : X)
  {
    cout << s << endl;
  }

  return 0;
}