#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<pair<string, int>> a(N);
  int rateTotal = 0, winUserNo = 0;
  for (int i = 0; i < N; i++)
  {
    string s;
    int c;
    cin >> s >> c;
    a[i] = {s, c};
    rateTotal += c;
  }
  sort(a.begin(), a.end());
  winUserNo = rateTotal % N;

  cout << a.at(winUserNo).first << endl;
  return 0;
}
