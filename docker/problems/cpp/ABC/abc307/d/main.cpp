#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  string S;
  cin >> N >> S;
  stack<char> s;
  int idx = 0;
  for (int i = 0; i < N; i++)
  {
    s.push(S[i]);
    if (s.top() == '(')
    {
    }
    if (s.top() == ')')
    {
    }
    idx++;
  }

  return 0;
}