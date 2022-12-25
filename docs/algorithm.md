<script type="text/x-mathjax-config">MathJax.Hub.Config({tex2jax:{inlineMath:[['\$','\$'],['\\(','\\)']],processEscapes:true},CommonHTML: {matchFontHeight:false}});</script> <script type="text/javascript" async src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.1/MathJax.js?config=TeX-MML-AM_CHTML"></script>

# アルゴリズム

様々なアルゴリズムについて記載する。

## 目次

1. ソートアルゴリズム
   1. 概要
   2. 選択ソート
   3. 挿入ソート
   4. マージソート
   5. クイックソート
2. 探索アルゴリズム
   1. 線分探索
   2. 二分探索
   3. 全探索
   4. 深さ優先探索
   5. 幅優先探索
3. 貪欲法
4. 動的計画法

## ソートアルゴリズム

### 概要

ソート（整列）とは、 **特定の順序構造に装用に順番を入れ替えること** です。基本的には言語の組み込みライブラリとして提供されているため、単純に利用することができますが学習には最適の教材です。

#### 基本的なソートアルゴリズムとその計算量

|アルゴリズム|最善時間|平均時間|最悪時間|領域|安定|内部|
|--|--|--|--|--|--|--|
|選択ソート|$\Omega(n^2)$|$\theta(n^2)$|$\mathcal{O}(n^2)$|$\mathcal{O}(1)$|△|〇|
|バブルソート|$\Omega(n)$|$\theta(n^2)$|$\mathcal{O}(n^2)$|$\mathcal{O}(1)$|〇|〇|
|挿入ソート|$\Omega(n)$|$\theta(n^2)$|$\mathcal{O}(n^2)$|$\mathcal{O}(1)$|〇|〇|
|マージソート|$\Omega(n\log(n))$|$\theta(n\log(n))$|$\mathcal{O}(n\log(n))$|$\mathcal{O}(n)$|〇|×|
|クイックソート|$\Omega(n\log(n))$|$\theta(n\log(n))$|$\mathcal{O}(n\log(n))$|$\mathcal{O}(1)$|〇|×|

#### ソートの安定性とは

安定性(Stability)とは、 **同じ値を持つ要素を含む配列にソートを行ったときに、ソート後も同じ順序が保たれる** 性質のことを指します。

#### 内部ソートと外部ソート

配列の内部を利用して処理を進めるか、外部のメモリを利用するのかは非常に重要な概念です。配列の要素を入れ替えながら進めるソートを内部ソート(In-place)とよび、外部へ一時的に保管しながらソートする者を外部ソートと呼びます。

### 選択ソート(Selection Sort)

ソートアルゴリズムの中でも最も基本的な概念の一つです。配列の中から最大/最小値を探索し、先頭/末尾と入れ替えることでソートを進めます。

#### 選択ソート アルゴリズム

基本的には、最小の要素を見つけて先頭と入れ替えることでソートを進めます。

1. i=0とする
2. i番目から末尾まですべての要素を確認し、最小の要素とi番目の要素を入れ替える
3. i++として、iが配列の長さを超えるまで繰り返し実行する。

```c++
vectro<int> list[10];

for(int i=0;i<list.size();i++){
   int minValue = list[i];
   int minIndex = i;
   for(int j==i+1;list.size();j++){
      if(minValue>list[j]){
         minValue=list[j];
         minIndex=j;
      }
   }
   tmp = list[i];
   list[i] = list[minIndex];
   list[minIndex] = tmp;
}
```

### バブルソート

隣り合う要素の大小関係によって入れ替えを行うソートアルゴリズム

#### バブルソートアルゴリズム

配列の要素数をnとしたとき、隣接する要素を並び替えながら探索していく方法

1. i=0として、n-1まで増やしていく
2. j=0として、n-i-1まで増やしていく
3. j,j+1の要素を比較して、j番目の方が大きかったら入れ替えを行う。

```c++
vector<int> list(5);
for(int i=0;i<list.size();i++){
   for(int j=0;j<list.size()-i;j++){
      if(list[j]>list[j+1]){
         list[j],list[j+1]=list[j+1],list[j]
      }
   }
}
```