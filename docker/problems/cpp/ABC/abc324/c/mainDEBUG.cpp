#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N;
string T;

int main()
{
  cin >> N >> T;
  string S;
  vector<int> ans;
  for (int i = 0; i < N; i++)
  {
    /**
    文字数が一致している場合 -> T'==T
                            T'≒T(一文字だけ違う)
    文字数が多い場合 -> 先頭か末尾に英小文字が挿入される
    文字数が少ない場合 -> Tから一文字削除されている
    */
    cin >> S;
    if (S.length() == T.length()) // 文字数が一致している場合
    {
      if (S == T) // T'==T
      {
        ans.push_back(i + 1);
        break;
      }
      int diffCount = 0;
      for (int j = 0; j < T.length(); j++)
      {
        if (T.substr(j, 1) != S.substr(j, 1))
        {
          diffCount += 1;
        }
        if (diffCount > 1)
        {
          break;
        }
      }
      if (diffCount == 1)
      {
        ans.push_back(i + 1);
      }
    }

    if ((S.length() + 1) == T.length()) // 文字数が多い場合
    {
      if (T == S.substr(2, T.length()) || T == S.substr(1, T.length()))
      {
        ans.push_back(i + 1);
      }
    }

    if ((S.length() - 1) == T.length()) // 文字数が少ない場合
    {
      int diffCount = 0;
      for (int j = 0; j < T.length(); j++)
      {
        if (T[i + diffCount] != S[i])
        {
          diffCount++;
        }
        if (diffCount > 1)
        {
          break;
        }
      }
      if (diffCount == 1)
      {
        ans.push_back(i + 1);
      }
    }
  }
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