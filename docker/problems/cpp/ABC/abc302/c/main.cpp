#include <bits/stdc++.h>
using namespace std;

bool is_one_char_diff(const string &a, const string &b)
{
  int diff_count = 0;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] != b[i])
    {
      diff_count++;
    }
    if (diff_count > 1)
      return false;
  }
  return diff_count == 1;
}

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> strings(N);
  for (int i = 0; i < N; i++)
  {
    cin >> strings[i];
  }

  sort(strings.begin(), strings.end());

  do
  {
    bool valid = true;
    for (int i = 0; i < N - 1; i++)
    {
      if (!is_one_char_diff(strings[i], strings[i + 1]))
      {
        valid = false;
        break;
      }
    }
    if (valid)
    {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(strings.begin(), strings.end()));

  cout << "No" << endl;
  return 0;
}
