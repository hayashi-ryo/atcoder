#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  string S;
  cin >> S;
  vector<int> A;
  int idx = 0, cnt = 0;
  while (idx < (int)S.length() - 1)
  {
    while (true)
    {
      cnt++;
      if (S[idx + cnt] == '|')
      {
        break;
      }
    }
    A.push_back(cnt);
    idx += cnt;
    cnt = 0;
  }
  for (int i = 0; i < (int)A.size(); i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << A[i] - 1;
  }
  cout << endl;
  return 0;
}