#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

int N;

int main()
{
  cin >> N;
  vector<int> Registers(N);
  vector<int> Times(N);
  for (int i = 0; i < N; i++)
  {
    cin >> Registers[i];
    cin >> Times[i];
  }

  // 0時から24時まで全て確認して最大値を求める
  int ans = 0;
  for (int i = 0; i < 25; i++)
  {
    int participant = 0;
    for (int j = 0; j < N; j++)
    {
      int time = Times[j] + i;
      if (time > 24)
      {
        time -= 24;
      }
      if ((9 <= time) && (time < 18))
      {
        participant += Registers[j];
      }
    }
    ans = max(ans, participant);
  }

  cout << ans << endl;
}