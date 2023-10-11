#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a.rbegin(), a.rend());

  int sumOfAlice = 0, sumOfBob = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      sumOfAlice += a[i];
    }
    else
    {
      sumOfBob += a[i];
    }
  }

  cout << sumOfAlice - sumOfBob << endl;
}