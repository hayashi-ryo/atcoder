#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  string previousMeal = S[0];
  for (int i = 1; i < N - 1; i++)
  {
    if (S[i] == previousMeal && S[i] == "sweet")
    {
      cout << "No" << endl;
      return 0;
    }
    previousMeal = S[i];
  }
  cout << "Yes" << endl;
  return 0;
}