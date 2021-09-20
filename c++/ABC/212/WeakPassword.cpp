#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int pass;
    cin >> pass;
    vector <int> vec_x(4);
    // 各桁の定義
    for (int i=0;i<4;i++) {
        int tmp = pow(10,i);
        vec_x.at(i) = pass / (1000/tmp);
        pass = pass%(1000/tmp);
        // cout << pass << endl;
        // cout << vec_x.at(i) << endl;
    }
    int flaga=0;
    int flagb=0;
    // 判定1　全桁同じ場合
    for (int i=0;i<3;i++) {
        int j=i+1;
        if (vec_x.at(i)==vec_x.at(j)) {
            flaga++;
        } else if ( (vec_x.at(i)+1)==vec_x.at(j) ) {
            flagb++;
        } else if ( (vec_x.at(i)==9)&&(vec_x.at(j)==0) ) {
            flagb++;
        }
    }
    if ( (flaga==3) or (flagb==3) ) {
        cout << "Weak" << endl;
    } else {
        cout << "Strong" << endl;
    }
}