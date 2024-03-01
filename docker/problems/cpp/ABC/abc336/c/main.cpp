#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long N;
  cin >> N;
  N--;
  vector<int> a;
  while (N)
  {
    a.push_back(N % 5);
    N /= 5;
  }
  if (a.empty())
    a.push_back(0);
  reverse(begin(a), end(a));
  for (auto &x : a)
    cout << x * 2;
  cout << endl;
}
