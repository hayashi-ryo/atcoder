#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  int T = 0, A = 0;
  for (int i = 0; i < N; i++)
  {
    int takahashi = 0, aoki = 0;
    cin >> takahashi >> aoki;
    T += takahashi;
    A += aoki;
  }

  string ans = "";
  if (T > A)
  {
    ans = "Takahashi";
  }
  else if (T < A)
  {
    ans = "Aoki";
  }
  else if (T == A)
  {
    ans = "Draw";
  }
  cout << ans << endl;
  return 0;
}