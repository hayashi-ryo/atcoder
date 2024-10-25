#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  string S;
  cin >> N >> S;
  vector<char> paint = {'R', 'B'};
  for (int i = 1; i < N - 1; i++)
  {
    for (auto c : paint)
    {
      if (S[i - 1] == c && S[i] == c && S[i + 1] == c)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}