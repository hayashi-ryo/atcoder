#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;
string S;

int main()
{
  cin >> N >> S;
  sort(S.begin(), S.end());

  ll maxVal = pow(10, N);
  int ans = 0;
  for (ll i = 0; i * i < maxVal; i++)
  {
    string T = to_string(i * i);
    T.resize(N, '0');
    sort(T.begin(), T.end());
    if (S == T)
    {
      ans++;
    }
  }
  cout << ans << endl;
}