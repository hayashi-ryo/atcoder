#include <bits/stdc++.h>
using namespace std;

void convNtoM(const string str, const int n, const int m, string &res)
{
  /*
  n進法からm進法へ変換する関数
  */
  unsigned long sum = 0;
  for (char c : str)
  {
    sum = sum * n + (c - '0');
  }
  res = "";
  int num = 0;
  do
  {
    num = sum % m;
    res = static_cast<char>(num + '0') + res;
    sum /= m;
  } while (sum);
}

void conv8to5(const string str, string &res)
{
  res = "";
  for (char c : str)
  {
    if (c == '8')
    {
      res += '5';
    }
    else
    {
      res += c;
    }
  }
}

int main()
{
  string N;
  int K;
  cin >> N >> K;
  string res = "", ans = "";
  int n = 8, m = 9;
  for (int i = 0; i < K; i++)
  {
    convNtoM(N, n, m, res);
    conv8to5(res, ans);
    N = ans;
  }

  cout << ans << endl;
}