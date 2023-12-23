#include <bits/stdc++.h>
using namespace std;
bool char1(char c)
{
  if (c == 'H' || c == 'D' || c == 'C' || c == 'S')
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool char2(char c)
{
  if (c == 'A' || c == '2' ||
      c == '3' || c == '4' ||
      c == '5' || c == '6' ||
      c == '7' || c == '8' ||
      c == '9' || c == 'T' ||
      c == 'J' || c == 'Q' || c == 'K')
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int N;
  set<string> st;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    string str;
    cin >> str;
    if (char1(str[0]) && char2(str[1]))
    {
      st.insert(str);
    }
    else
    {
      cout << "No" << endl;
      return 0;
    }
  }
  if (st.size() == N)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}