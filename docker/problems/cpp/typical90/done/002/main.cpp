#include <bits/stdc++.h>
using namespace std;

bool isValid(const string &S)
{
  int score = 0;
  for (auto c : S)
  {
    if (c == '(')
      ++score;
    else if (c == ')')
      --score;

    if (score < 0)
    {
      return false;
    }
  }
  return (score == 0);
}

int main()
{
  int N;
  cin >> N;

  for (int bit = 0; bit < (1 << N); ++bit)
  {
    string S = "";
    for (int i = N - 1; i >= 0; --i)
    {
      if (!(bit & (1 << i)))
        S += "(";
      else
        S += ")";
    }

    if (isValid(S))
      cout << S << endl;
  }
}