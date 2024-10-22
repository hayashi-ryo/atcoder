#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  vector<ll> repunit(12);
  for (int i = 0; i < 12; i++)
  {
    if (i == 0)
    {
      repunit[i] = 1;
    }
    else
    {
      repunit[i] = repunit[i - 1] * 10 + 1;
    }
  }

  vector<ll> sums;
  for (int i = 0; i < 12; ++i)
  {
    for (int j = i; j < 12; ++j)
    {
      for (int k = j; k < 12; ++k)
      {
        sums.push_back(repunit[i] + repunit[j] + repunit[k]);
      }
    }
  }

  sort(sums.begin(), sums.end());
  sums.erase(unique(sums.begin(), sums.end()), sums.end());

  cout << sums[N - 1] << endl;
  return 0;
}