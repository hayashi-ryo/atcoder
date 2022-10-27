# 各種ツールを使ったatcoderの実施方法

## コマンド

- 雛形の作成
  - 受験したいコンテストIDを確認して以下のコマンドを発行する
  `acc new abc123'
- テスト実施
  - テストは以下のコマンドで実行する
  `oj test`
  実態は`oj test -c \" pypy ${fileDirname}/main.py\" -d ${fileDirname}/tests/`
  - ショートカットコマンドはCtrl+Shift+T
- 提出
  - 提出は以下コマンドを利用する
  `acc submit'

## 参考サイト
https://qiita.com/YUM_3/items/6910b9d14ea544d643f3
https://qiita.com/natsuozawa/items/c97f374900312fc4d8ca