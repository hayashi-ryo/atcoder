#!/bin/sh

# 呼び出し方
# gitCommit.sh "コミットメッセージ"

# set -x

echo ""
echo "##################"
echo "### git commit ###"
echo "##################"
echo ""

if [ $# -ne 1 ]; then
  echo "パラメータ個数ERROR"
  # ERROR
  exit 1
fi

# コミットメッセージの入力

commitMessage=$1
echo "commitMessage:" $commitMessage

echo ""
echo "#####################"
echo "### Select Prefix ###"
echo "#####################"
echo ""

# プレフィックスと説明文を定義
options=("feat: 新しい機能" "fix: バグの修正" "docs: ドキュメントのみの変更" "style: 空白、フォーマット、セミコロン追加など" "refactor: 仕様に影響がないコード改善(リファクタ)" "perf: パフォーマンス向上関連" "test: テスト関連" "chore: ビルド、補助ツール、ライブラリ関連" "コミット中止")

PS3="Prefixを選択してください: "
select option in "${options[@]}"; do
    case $REPLY in
        1|2|3|4|5|6|7|8)
            prefix=$(echo "$option" | cut -d':' -f1)
            break
            ;;
        9)
            echo "コミットを中止します"
            exit 1
            ;;
        *)
            echo "無効な選択です。1から8の数字を入力してください。"
            ;;
    esac
done


commit_message="[$prefix]: $1"

git add .
git commit -m "$commit_message"

echo ""
echo "#######################"
echo "### commit complete ###"
echo "#######################"
echo ""
