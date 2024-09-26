#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int N, M;
  cin >> N >> M;
  vector<bool> status(N, false);

  for (int i = 0; i < M; i++)
  {
    int a;
    char b;
    cin >> a >> b;
    a--;
    if (b == 'M' && status[a] == false)
    {
      cout << "Yes" << endl;
      status[a] = true;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}