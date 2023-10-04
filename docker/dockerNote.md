# atcoder用環境構築

atcoder勉強用の環境を構築する。言語ベースはpythonだが、今後のことを考えてlinuxベースで構築する。

## 構成概要

- イメージ
  - Ubuntuのdocker環境を導入する
- フォルダ構成

```dir
docker
├──Dockerfile
├──docker-compose.yml
├──library   -> /root/library
├──.vscode   -> /root/.vscode:cached
├──templates -> /root/.config/atcoder-cli-nodejs
├──problems  -> /root/problems
└──../note   -> /root/note
```

### 　環境構築

1. dockerイメージのビルド
   1. Dockerfileの作成
   2. ビルド命令の実行
    `docker build --rm -t atcoder .`
    `docker images`
2. docker-composeでアクセス
3. 拡張機能のインストール
   1. Command Runnerの設定
