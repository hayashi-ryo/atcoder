#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t N = 0, k=0;
    // 配列の定義
    cin >> N >> k;

    vector <int> vec(N);
    vector <int> vec_ex(N);
    for (int i=0;i<N;i++) {
        cin >>vec.at(i);
        vec_ex.at(i)=vec.at(i);
    }
    
    // sortと計算
    sort(vec.begin(), vec.end());
    vector <int64_t> con(N);
    // cout << k << endl;
    // cout << N << endl;
    for (;k>0;) {
        // cout << "i" << i << endl;
        // cout<< "OK" <<endl;
        if(N<=k) {
            // cout<< "OK" <<endl;
            int64_t tmp = k/N;
            for(int j=0;j<N;j++) {
                con.at(j) +=tmp;
                // cout << j << "at" <<con.at(j) << endl;
            }
            k = k%N;
            // cout << k << endl;
        } else {
            // cout<< "NG" <<endl;
            for(int64_t j=0;j<k;j++) {
                con.at(j) +=1;
            }
            k = 0;
        }
    }
    int flagi = 0;
    int flagj = 0;
    int64_t tmp = k/N;
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            // cout << j <<endl;
            flagj = 0;
            if(vec.at(j)==vec_ex.at(i)) {
                cout << con.at(j) << endl;
                flagj = 1;
            }
            if (flagj==1) {
                break;
            }
        }
    }
}