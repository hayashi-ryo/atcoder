#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    /*
    基本方針 
    性＋名をまとめて配列に登録し、もとの配列サイズと重複削除後の配列サイズを比較することで
    同姓同名を検索する
    */


    int N=0; //人数
    cin >> N;
    //配列の登録

    vector<string> seimei(N);
    for (int i=0;i<N;i++) {
        string tmp_S ="";
        string tmp_M ="";
        cin >> tmp_S >> tmp_M;
        seimei.at(i) = tmp_S+"."+tmp_M;
    }

    // vector<int> vals_b=b;
    sort(seimei.begin(), seimei.end());
    // sort(vals_b.begin(), vals_b.end());
    seimei.erase(unique(seimei.begin(),seimei.end()), seimei.end());
    int count = seimei.size();
    if(count<N) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}
