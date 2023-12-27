# Introduction

- [Introduction](#introduction)
  - [標準ライブラリ(STL)](#標準ライブラリstl)
  - [参考サイト](#参考サイト)
  - [学習目標](#学習目標)
    - [abs](#abs)
    - [sin cos tan](#sin-cos-tan)
    - [string](#string)
    - [min max](#min-max)
    - [swap](#swap)
    - [\_\_gcd](#__gcd)
    - [rand](#rand)
    - [clock](#clock)
    - [reverse](#reverse)
    - [sort](#sort)
    - [vector](#vector)
    - [stack](#stack)
    - [queue](#queue)
    - [priority\_queue](#priority_queue)
    - [map](#map)
    - [lower\_bound](#lower_bound)
    - [set](#set)
    - [pair](#pair)
    - [tuple](#tuple)
    - [assert](#assert)
    - [count](#count)
    - [find](#find)
    - [next\_permutation](#next_permutation)
    - [\_\_builtin\_popcount](#__builtin_popcount)
    - [bitset](#bitset)

## 標準ライブラリ(STL)

競技プログラミング(AtCoder)では標準ライブラリが非常に便利に活用できる。
水色を目指す上で必要不可欠な要素となるので利用法を含めて機能の整理をしていく。

## 参考サイト

- [レッドコーダーが教える、競プロ・AtCoder上達のガイドライン【中級編：目指せ水色コーダー！】](https://qiita.com/e869120/items/eb50fdaece12be418faa)
- [厳選！C++ アルゴリズム実装に使える 25 の STL 機能【前編】](https://qiita.com/e869120/items/518297c6816adb67f9a5)
- [厳選！C++ アルゴリズム実装に使える 25 の STL 機能【後編】](https://qiita.com/e869120/items/702ca1c1ed6ff6770257)

## 学習目標

標準ライブラリを利用して便利な計算処理を実施できるようにする

### abs

引数xの絶対値を返す**関数**
`abs(-16)=16`のように引数の絶対値を返してくれる。int型だけではなくdouble型などの浮動小数点型にも対応している。

### sin cos tan

各引数に対して計算した三角関数の結果を返す。度数法ではなく弧度法である点に注意が必要。

```c++
double PI = 3.141592653589793238;
cout << sin(PI/6) << "=0.5" << endl;
cout << cos(PI/6) << "=0.8660..." << endl;
cout << tan(PI/6) << "=0.5773..." << endl;
```

### string

文字列を扱う**型**。
利用頻度の高い操作は以下の通り。
| プログラム | 説明 |
|--|--|
|S[i]|Sのi文字目を表す。取得されるものはcharとして扱うのがわかりやすい|
|S.size() S.length()|文字列Sの長さをint型で返す|
|S.substr(i)|文字列Sのi文字目から最後までの部分文字列を返す|
|S.substr(i,r)|文字列Sのi文字目からi+r-1文字目までの部分文字列を返す|

### min max

入力値の最大/最小を返す関数。配列を引数として与えることもできる。

### swap

二つ変数を交換する関数。

```c++
int a=100;
int b=200;
swap(a,b);
cout << a << endl; // 200が出力される

```

### __gcd

二つの引数の最大公約数を返す関数。

```c++
__gsd(3,4); // 12が出力される
```

最小公倍数を返す関数は存在しないが、gcdを利用することで計算が可能。
`a / __gcd(a,b) * b`

### rand

乱数を生成する関数。基本的に以下の二つを覚えておく。

| プログラム | 説明 |
|--|--|
|rand()|$0以上2^{31}-1$以下のランダムな整数を返す|
|srand((unsigned)time(NULL));|おまじない。main関数の頭にこれをつけると実行ごとに乱数生成結果が変化する。|

### clock

時間を計測する関数。基本的に以下の二つを覚えておく。
| プログラム | 説明 |
|--|--|
|clock()|プログラム実行開始から何単位時間経過したかを整数で返す|
|CLOCKS_PER_SEC|環境によって1秒が何単位時間か異なるため、具体的な秒数を確認したい時に利用する|

具体的な実行開始からの秒数は`clock()/CLOCKS_PER_SEC`で表現される。

### reverse

配列のある区間を逆順に並び替える関数。
| プログラム | 説明 |
|--|--|
|reverse(a, a + N)|a[0],a[1],...,a[N-1]を逆順に並び替える。|
|reverse(a+l, a+r)|a[l], a[l+1],
..., a[r-1] を逆順に並び替える。|

計算量は$O(N)$。文字列の逆順変換も実施できる。

### sort

配列のある区間を**特定の順番**に並び替える。基本的に以下の3パターンを覚えておく。

| プログラム | 説明 |
|--|--|
|`sort(a,a+N);`|a[0], a[1], ..., a[N-1] を小さい順に並び替える。|
|`sort(a+l,a+r);`|a[l], a[l+1], ..., a[r-1] を小さい順に並び替える。|
|`sort(a,a+N, greater<int>());`|a[0], a[1], ..., a[N-1] を**大きい順**に並び替える。ソート対象の要素に応じて型を指定する。|

### vector

**動的な**配列を表す型。

### stack

スタックというデータ構造を管理できる型。LIFOの考え方に則ってデータを管理する。

### queue

キューというデータ構造を管理できる型。FIFOの考え方に則ってデータを管理する。

### priority_queue

優先度付きキューというデータ型を管理できる型。キューの中に存在する要素のうち一番小さいものをpopできる。

### map

キーとして整数型以外も持てるデータ構造。文字列型をキーとして扱うこともできる。

### lower_bound

二分探索を実施する関数。
配列aが小さい順にソートされている場合に、はじめて引数以上となるようなインデックスを返す。

```c++
int a[5] = {2,3,4,6,9};
lowew_bound(a.begin(), a.end(),5); // はじめて5以上になる6のインデックスを返す。
*lowew_bound(a.begin(), a.end(),5); // こうすることでインデックスではなく実値を返す。
```

### set

集合を管理できるデータ構造。必要な操作は以下の通り。

| プログラム | 説明 |
|--|--|
|a.insert(x)|集合aに要素xを追加する。(もしxが集合に存在する場合は追加しない)|
|a.erase(x)|集合aから要素xを削除する。イテレータを指定して削除することもできる。|
|a.lower_bound(x)|集合aの中でx以上である最小要素を指すイテレータを返す。|
|a.clear()|集合aを空にする。|

### pair

2つの異なる型を一つの変数で持つことができる**組**を表現できる。
それぞれの要素は`a,first;` `a.second;`でアクセスすることができる。

### tuple

3つ以上の要素から成る**組**を持つことができる型。pairと異なりtupleは要素の上限がない。

```c++
// tuple型変数の宣言
taple <v1, v2, v3> a;
// 要素へのアクセス
get<i>(a); // i 番目
```

### assert

条件を満たさない場合にランタイムエラーを起こす関数。基本的にデバッグで使用する。

### count

配列や`vector`のある区間要素のうち、引数xがいくつ含まれるかを返す関数。

### find

配列や`vector`のある区間要素のうち、引数xが含まれるか、含まれる場合はどこにあるかを返す関数。

### next_permutation

次の順列を生成する関数
基本的にwhil-loopと組み合わせて使う。

```c++
// 配列の場合
int n, a[109]; cin >> n;
for (int i = 0; i < n; i++) cin >> a[i];
do {
    for (int i = 0; i < n; i++) {
        if (i) cout << ",";
        cout << a[i];
    }
    cout << endl;
} while(next_permutation(a, a + n));

```

### __builtin_popcount

整数xを二進数で表現した時に、1であるビットの個数を返す関す。

### bitset

bit集合を表す型。N桁の二進数と考えればよい。
