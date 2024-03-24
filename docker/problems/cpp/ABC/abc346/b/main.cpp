#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

string S = "wbwbwwbwbwbw";
int Ssize = S.length();

int main()
{
  int W, B;
  cin >> W >> B;
  rep(i, 7) S += S;
  int wCnt = 0, bCnt = 0;
  for (int i = 0; i < 12; i++)
  {
    string T = S.substr(i, W + B);
    wCnt = count(T.begin(), T.end(), 'w');
    bCnt = (W + B) - wCnt;
    if (W == wCnt && B == bCnt)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}