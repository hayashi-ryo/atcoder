#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int M;

void isAlignReel(string s, int &time, int &sumTime, int M, int digit)
{
  if (time == -1)
  {
    return;
  }
  for (int j = 0; j < M; j++) // 揃えたいリール
  {
    int x = stoi(s.substr(j, 1));
    if (x == digit)
    {
      time = (j + 1);
      sumTime += time;
      break;
    }
    else
    {
      time = -1;
    }
  }
  return;
}

void multiplyString(string &str, int times)
{
  string result;
  for (int i = 0; i < times; ++i)
  {
    result += str;
  }
  str = result;
  return;
}

int main()
{
  /*
  リールを0~9の全ての数字で合わせようと回転させて、揃った場合の最小値を出力する
  */
  cin >> M;
  string S1, S2, S3;
  cin >> S1 >> S2 >> S3;
  vector<int> ans(10);
  multiplyString(S1, 3);
  multiplyString(S2, 3);
  multiplyString(S3, 3);

  for (int i = 0; i < 10; i++) // リールを揃えたい数字
  {
    int time = 0;
    int sumTime = 0;
    isAlignReel(S1, time, sumTime, M, i);
    isAlignReel(S2, time, sumTime, M, i);
    isAlignReel(S3, time, sumTime, M, i);
    if (time == -1)
    {
      ans[i] = -1;
    }
    else
    {
      ans[i] = time;
    }
  }

  // rep(i, M) { cout << "ans[" << i << "]:" << ans[i] << endl; }
  sort(ans.begin(), ans.end());
  int answerTime = *lower_bound(ans.begin(), ans.end(), -1);
  if (answerTime > 0)
  {
    cout << answerTime - 1 << endl;
  }
  else
  {
    cout << -1 << endl;
  }
}
