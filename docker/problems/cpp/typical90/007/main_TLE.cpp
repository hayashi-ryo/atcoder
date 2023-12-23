#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int N;
  cin >> N;
  vector<ll> a(N);
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int Q;
  cin >> Q;
  if (N != 1)
  {
    for (int i = 0; i < Q; i++)
    {
      ll b, score = 0;
      cin >> b;
      score = abs(a[0] - b);
      for (int i = 1; i < N; i++)
      {
        if (score >= abs(a[i] - b))
        {
          score = abs(a[i] - b);
        }
        else
        {
          break;
        }
      }
      cout << score << endl;
    }
  }
  else
  {
    for (int i = 0; i < Q; i++)
    {
      ll b;
      cin >> b;
      cout << abs(a[0] - b) << endl;
    }
  }
}