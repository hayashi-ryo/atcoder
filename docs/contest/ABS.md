# AtCoder Beginners Selection

AtCoderに登録して最初に実施する初心者向け問題集

## 目的

- 基本文法の定着
- コンテストの受け方に慣れる
  - 環境関連
  - 振り返り方法

## PracticeA Welcome to AtCoder

- 単純な入力操作と変数宣言を実施する

## ABC086A - Product

- 偶奇判定処理を実装する
  - 今回はaもしくはbが2で割り切れる場合を判定した
  - 場合によってはa*bを判定させた方が良いかも

## ABC081A - Placing Marbles

- 文字列を一つ一つ判定する
  - char型の比較はシングルクォーテーションで実施する

## ABC081B - Shift only

- 配列の生成と偶奇反転を組み合わせ実施
- 本来的には配列の各項の2で割る数の最小値を求めれば良いはず

## ABC087B - Coins

- 3重ループで処理を実行する
  - 計算量的にC問題以上くらいだと何らかの工夫が必要

## ABC083B - Some Sums

- 格桁の和を求めるために以下の関数を実装した

```c++
int sumOfDigits(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += (n % 10);
    n /= 10;
  }
  return sum;
}
```

## ABC088B - Card Game for Two

- 配列操作の基本処理「ソート」
- `vector<type> vec(n);`で宣言して
  - `sort(vec.begin(),vec.end())`でソート処理を実行
  - 降順ソートは`sort(vec.rbegin(),vec.rend())`でソート処理を実行

## ABC085B - Kagami Mochi

- 重複排除の配列setを利用
- vectorからの挿入は`for(int i=0;i<n;i++)set.insert(vec[i])`

## ABC085C - Otoshidama

- 単純な三重ループを実装すると時間内に処理を終えることができない場合がある
  - 目安として1秒間で処理できるforループの回数は$10^8 = 10,000,000$
  - 今回の処理は愚直に実装すると$2000^3=8.000,000,000$になる可能性がある。

## ABC049C - 白昼夢

- 条件をよく見ると分割句を後ろから見ると一致していないことを利用する
  - 前から見ると条件分岐が複雑になってしまう

## ABC086C - Traveling

- 条件を分析して、それを満たしているかを座標ごとに確認していく
