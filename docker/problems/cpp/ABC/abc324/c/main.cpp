#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N;
string T;

bool isEqual(const string &t, const string &s)
{
  if (t.length() != s.length())
  {
    return false;
  }
  for (int i = 0; i < t.length(); ++i)
  {
    if (t[i] != s[i])
    {
      return false;
    }
  }
  return true;
}

bool isInsert(const string &t, const string &s)
{
  if (t.length() + 1 != s.length())
  {
    return false;
  }
  int i = 0, j = 0;
  while (i < t.length() && j < s.length())
  {
    if (t[i] != s[j])
    {
      ++j;
    }
    else
    {
      ++i;
      ++j;
    }
  }
  return i == t.length();
}

bool isDelete(const string &t, const string &s)
{
  if (t.length() - 1 != s.length())
  {
    return false;
  }
  int i = 0, j = 0;
  while (i < t.length() && j < s.length())
  {
    if (t[i] != s[j])
    {
      ++i;
    }
    else
    {
      ++i;
      ++j;
    }
  }
  return j == s.length();
}

bool isReplace(const string &t, const string &s)
{
  if (t.length() != s.length())
  {
    return false;
  }
  int diffCount = 0;
  for (int i = 0; i < t.length(); ++i)
  {
    if (t[i] != s[i])
    {
      ++diffCount;
    }
  }
  return diffCount == 1;
}

int main()
{
  cin >> N >> T;
  string S;
  vector<int> ans;
  for (int i = 0; i < N; i++)
  {
    cin >> S;
    if (isEqual(T, S) || isInsert(T, S) || isDelete(T, S) || isReplace(T, S))
    {
      ans.push_back(i + 1);
    }
  }

  if (ans.size() == 0)
  {
    cout << 0 << endl
         << endl;
  }
  else
  {
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
      if (i == ans.size() - 1)
      {
        cout << ans[i] << endl;
      }
      else
      {
        cout << ans[i] << " ";
      }
    }
  }
}