#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  string S;
  cin >> N >> S;
  set<char> exist;
  int i = 0;
  while (i < N)
  {
    exist.insert(S[i]);
    if (exist.size() == 3)
    {
      cout << i + 1 << endl;
      break;
    }
    i++;
  }

  return 0;
}