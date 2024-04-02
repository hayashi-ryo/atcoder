#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll N, K;
  cin >> N >> K;
  vector<ll> vec(N);
  for (int i = 0; i < N; i++)
  {
    cin >> vec.at(i);
  }
  ll total = 0;
  for (int i = 0; i < N; i++)
  {
    ll sum = vec.at(i);
    int x = 0;
    while (sum <= K)
    {
      x++;
      if (i + x >= N)
      {
        break;
      }
      sum += vec.at(i + x);
    }
    total += x;
  }
  cout << total << endl;
}