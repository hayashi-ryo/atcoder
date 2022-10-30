#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N = 0;
  cin >> N;
  vector<int> card(N);
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    card[i] = a;
  }
  sort(card.begin(), card.end());
  reverse(card.begin(), card.end());
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    if (i % 2 == 0)
    {
      ans += card[i];
    }
    else
    {
      ans -= card[i];
    }
  }
  cout << ans << endl;
}