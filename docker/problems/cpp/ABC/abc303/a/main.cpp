#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  string S, T;
  cin >> N >> S >> T;

  for (int i = 0; i < N; i++)
  {
    if (!(
            (S[i] == T[i]) ||
            (S[i] == 'l' && T[i] == '1') ||
            (S[i] == '1' && T[i] == 'l') ||
            (S[i] == '0' && T[i] == 'o') ||
            (S[i] == 'o' && T[i] == '0')))
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}