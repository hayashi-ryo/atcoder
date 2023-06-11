#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N = 0;
  cin >> N;

  set<string> userName;
  for (int i = 0; i < N; i++)
  {
    string s;
    cin >> s;
    set<string>::iterator iti = userName.find(s);
    if (iti == userName.end())
    {
      cout << i + 1 << endl;
      userName.insert(s);
    }
  }
}