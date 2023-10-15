#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N;

void trimTrailingWhitespace(std::string &str)
{
  // 文字列の末尾から空白文字を削除
  str.erase(std::find_if(str.rbegin(), str.rend(), [](int ch)
                         { return !std::isspace(ch); })
                .base(),
            str.end());
}

int main()
{
  cin >> N;
  vector<int> result(N);
  for (int i = 0; i < N; i++)
  {
    string S = "";
    cin >> S;
    for (int j = 0; j < N; j++)
    {
      if (S[j] == 'o')
      {
        result[i]++;
      }
    }
  }

  string ans = "";
  for (int i = N - 1; i > -1; i--)
  {
    for (int j = 0; j < N; j++)
    {
      if (result[j] == i)
      {
        ans += to_string(j + 1);
        ans += " ";
      }
    }
  }

  trimTrailingWhitespace(ans);
  cout << ans << endl;
}