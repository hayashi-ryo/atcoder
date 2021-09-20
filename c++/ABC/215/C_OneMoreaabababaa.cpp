#include <bits/stdc++.h>
using namespace std;
// powで計算してたら何故かダメだった後で確認する
int main() {
    int s=0;
    string k;
    cin >> k >> s;

    // 文字列の確認
    // 順列列挙の方法を用いてやる
    sort(k.begin(),k.end());
    vector<string> vec;
    // cout << k << endl;
    do{
        vec.push_back(k);
    } while (next_permutation(k.begin(), k.end()));

    cout << vec.at(s-1) << endl;
}