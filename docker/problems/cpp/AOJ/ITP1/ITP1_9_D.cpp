#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(string s, int a, int b)
{
  cout << s.substr(a, b - a + 1) << endl;
}

string reverse(string s, int a, int b)
{
  string rev = "";
  string pres, defs;
  for (int i = b; i > a - 1; i--)
  {
    rev += s[i];
  }
  pres = s.substr(0, a);
  defs = s.substr(b + 1);
  s = pres + rev + defs;
  return s;
}

string replace(string s, int a, int b, string p)
{
  string pres, defs;
  pres = s.substr(0, a);
  defs = s.substr(b + 1);
  s = pres + p + defs;
  return s;
}

int main()
{
  string str;
  int q;
  cin >> str >> q;
  for (int i = 0; i < q; i++)
  {
    string query = "";
    int a, b;
    cin >> query >> a >> b;
    if (query == "print")
    {
      print(str, a, b);
    }
    else if (query == "reverse")
    {
      str = reverse(str, a, b);
    }
    else if (query == "replace")
    {
      string p;
      cin >> p;
      str = replace(str, a, b, p);
    }
  }
}