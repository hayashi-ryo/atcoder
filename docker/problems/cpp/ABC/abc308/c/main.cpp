#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x) for (int i = 0; i < (x); i++)

struct Person
{
  int index;      // 人の番号
  long long A, B; // 表と裏の回数
};

// ソートのための比較関数
bool compare(const Person &p1, const Person &p2)
{
  // 成功率の比較をするが、割り算を直接行わずにクロス乗算で比較
  // p1の成功率 A1/(A1+B1) と p2の成功率 A2/(A2+B2) の比較を A1*(A2+B2) と A2*(A1+B1) で行う
  if (p1.A * (p2.A + p2.B) != p2.A * (p1.A + p1.B))
  {
    return p1.A * (p2.A + p2.B) > p2.A * (p1.A + p1.B);
  }
  // 成功率が同じ場合は番号の小さい順に
  return p1.index < p2.index;
}

int main()
{
  int N;
  cin >> N;

  vector<Person> people(N);

  // 入力を受け取る
  for (int i = 0; i < N; ++i)
  {
    people[i].index = i + 1; // 人の番号は1から始まる
    cin >> people[i].A >> people[i].B;
  }

  // 比較関数を使ってソート
  sort(people.begin(), people.end(), compare);

  // ソート後の結果を出力
  for (int i = 0; i < N; i++)
  {
    if (i != 0)
    {
      cout << " ";
    }
    cout << people[i].index;
  }

  cout << endl;
  return 0;
}