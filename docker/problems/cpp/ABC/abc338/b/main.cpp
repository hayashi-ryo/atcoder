#include <iostream>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int a[128] = {};
  for (char c : S)
  {
    ++a[c];
  }
  char ans = 'a';
  for (char c = 'b'; c <= 'z'; ++c)
  {
    if (a[c] > a[ans])
    {
      ans = c;
    }
  }
  cout << ans << endl;
}
