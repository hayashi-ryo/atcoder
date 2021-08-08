#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
    int a=0,b=0,c=0,d=0;
    cin >> a >> b >> c >> d;

    //nの存在確認
    int flag = 0;
    if(b>=c*d) {
        flag = 1; 
    }


    if (flag==1) {
        cout << "-1" << endl;
    } else {
        // nが存在する場合
        int n = (a + ((c*d-b)-1)) / (c*d-b);
        cout << n << endl;
    }
    /* 
    水色
        0回目:A
        n回目:A+B*n
    赤色
        0回目:0
        n回目:C*n
    条件
        水色のボールの個数が、赤色のボールの個数のD倍以下になるようにする
        A+B*n < C*n*D を満たすnが存在すれば良い
    nが存在するか
        B<CD
    nの存在
    n(B-CD) <= -A
    n(CD-B) >= A
    n >= A/(CD-B)
    */
}