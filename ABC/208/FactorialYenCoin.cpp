#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
    int p=0;
    /* p=2^x + 2^y + ... が示せれば良い */
    cin >> p;
    int count = 0;
    for (int i=10;i>=0;i--) {
        int tmp = 1;
        // 階乗の計算
        for (int j=1;j<=i;j++) {
            tmp *= j;
        }
        // cout << "tmp" << tmp << endl;
        // cout << "count" << count << endl;
        if (p>=tmp) {
            // cout << p/tmp << endl;
            count += p/tmp;
            p -= tmp*(p/tmp);
        }
    }
    cout << count << endl;
}