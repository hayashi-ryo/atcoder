#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    
    float n=0; //input変数
    cin >> n;
    int X=n; //少数桁捨ての定義
    string str =to_string(X); //文字列変換
    /*
    10*n-10*X:少数部分のみを抜き出すための演算
    */
    if ( (10*n-10*X) <=2 ) {
        cout << str+"-" << endl;
    } else if( (10*n-10*X) >=7) {
        cout << str+"+" << endl;
    } else {
        cout << str << endl;
    }
}