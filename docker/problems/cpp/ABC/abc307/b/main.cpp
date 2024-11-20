#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

bool isPalindrome(const string &S)
{
  for (int i = 0, j = S.size() - 1; i <= j; i++, j--)
  {
    if (S[i] != S[j])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) cin >> S[i];

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      string SiSj = S[i] + S[j];
      if (isPalindrome(SiSj))
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
