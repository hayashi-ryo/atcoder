#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  vector<int> alphabet(26);

  while (getline(cin, str))
  {
    for (int i = 0; i < str.size(); i++)
    {
      if (isalpha(str[i]))
      {
        char c = tolower(str[i]);
        int num = c - 'a';
        alphabet[num]++;
      }
    }
  }

  for (int i = 0; i < alphabet.size(); i++)
  {
    char c = i + 'a';
    cout << c << " : " << alphabet[i] << endl;
  }
  return 0;
}