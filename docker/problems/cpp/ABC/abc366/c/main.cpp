#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N;
  cin >> N;
  map<int, int> ball;
  for (int i = 0; i < N; i++)
  {
    int query = 0, x = 0;
    cin >> query;
    if (query == 1)
    {
      cin >> x;
      ball[x]++;
    }
    else if (query == 2)
    {
      cin >> x;
      ball[x] -= 1;
      if (ball[x] == 0)
      {
        auto it = ball.find(x);
        ball.erase(it);
      }
    }
    else if (query == 3)
    {
      cout << ball.size() << endl;
    }
  }

  return 0;
}