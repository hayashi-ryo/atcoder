#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 再帰的に数列を生成する関数
void generate_sequences(int idx, int sum, int N, int K, const vector<int> &R, vector<int> &current, vector<vector<int>> &result)
{
  if (idx == N)
  {
    // 長さNの数列が完成したら、それがKの倍数かどうかを確認する
    if (sum % K == 0)
    {
      result.push_back(current);
    }
    return;
  }

  // 1からR[idx]までの値を試す
  for (int i = 1; i <= R[idx]; ++i)
  {
    current[idx] = i;
    generate_sequences(idx + 1, sum + i, N, K, R, current, result);
  }
}

int main()
{
  int N, K;
  cin >> N >> K;

  vector<int> R(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> R[i];
  }

  vector<vector<int>> result;
  vector<int> current(N, 0);

  // 再帰的に数列を生成
  generate_sequences(0, 0, N, K, R, current, result);

  // 辞書順でソート
  sort(result.begin(), result.end());

  // 結果を出力
  for (const auto &sequence : result)
  {
    for (int i = 0; i < N; ++i)
    {
      if (i != 0)
      {
        cout << " ";
      }
      cout << sequence[i];
    }
    cout << endl;
  }

  return 0;
}
