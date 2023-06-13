#include <bits/stdc++.h>
using namespace std;
int main()
{
  int Q;
  cin >> Q;
  vector<int> deck(0);
  for (int i = 0; i < Q; i++)
  {
    int t, x;
    cin >> t >> x;
    if (t == 1)
    {
      deck.insert(deck.begin(), x);
    }
    else if (t == 2)
    {
      deck.push_back(x);
    }
    else if (t == 3)
    {
      cout << deck[x - 1] << endl;
    }
  }
}