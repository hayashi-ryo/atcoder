# 競プロ典型90問

[競プロ典型90問](https://atcoder.jp/contests/typical90)の問題をレベルごとに実施し、考え方などをまとめていく

## 星2

1. 004 Cross Sum
2. 010 Score Sum Queries
3. 022 Cubic Cake
4. 024 Select +／- One
5. 027　Sign Up Requests
6. 033 Not Too Bright
7. 055 Select 5
8. 061 Deck
9. 067 Base 8 to 9
10. 078 Easy Graph Problem

### 004 Cross Sum

- 全ての領域で都度都度計算を行うとTLEになってしまうもの
- 今回はあらかじめ行と列を足し合わせておくことで計算量を減らした

### 010 Score Sum Queries

- この問題も都度計算を行うとTLEになってしまうもの
- 今回は累積和を用いることで計算を行った

### 022 CubicCake

- 単純な数学の問題
- 3辺の最大公約数を計算し、それによって値を求めた

### 024 Select +／- One

- それぞれの数列の値ごとの変更量を計算し、その合計値によって場合わけして計算を行う

### 027　Sign Up Requests

- 重複を許さない演算を行う時は集合を利用する

### 033 Not Too Bright

- 偶奇それぞれのパターンごとについて状況を考察し、その結果をプログラムに落とし込んでいく

### 055 Select 5

- 5変数のmod演算
- 本当は組み合わせ(combination)を生成する方法で実践したかったが、できなかった。。

### 061 Deck

- A変数ごとに配列に操作を変更する
- 利用するのはpush_backとinsert

### 067 Base 8 to 9

- n進法からm進法へ変更する操作を行う

### 078 Easy Graph Problem

- グラフを配列に格納し、値ごとに計算を行うだけ

## 　星3

1. 002 Encyclopedia of Parentheses

### 002 Encyclopedia of Parentheses

- カッコをそれぞれ01で表現して、整合性がとれているもののみを抽出する
- この問題では以下のbitに対する操作を学んだ
  - `for (int bit = 0; bit < (1 << N); ++bit)`
    - 特定の値域の全bit探索
