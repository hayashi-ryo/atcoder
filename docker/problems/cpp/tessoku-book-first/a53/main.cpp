#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int Q;
  priority_queue<int, vector<int>, greater<int>> stock;
  cin >> Q;

  for (int i = 0; i < Q; i++)
  {
    int q, price;
    cin >> q;
    if (q == 1)
    {
      cin >> price;
      stock.push(price);
    }
    else if (q == 2)
    {
      cout << stock.top() << endl;
    }
    else if (q == 3)
    {
      stock.pop();
    }
  }

  return 0;
}