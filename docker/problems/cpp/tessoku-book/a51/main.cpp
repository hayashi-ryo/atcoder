#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int main()
{
  int Q;
  cin >> Q;
  stack<string> books;
  for (int i = 0; i < Q; i++)
  {
    int q;
    string bookName;
    cin >> q;
    if (q == 1)
    {
      cin >> bookName;
      books.push(bookName);
    }
    else if (q == 2)
    {
      cout << books.top() << endl;
    }
    else if (q == 3)
    {
      books.pop();
    }
  }

  return 0;
}