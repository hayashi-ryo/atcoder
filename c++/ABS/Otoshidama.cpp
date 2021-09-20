#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N=0,Y=0;
    cin >> N >> Y;

    int a=0,b=0,c=0;
    bool flag = false;
    for (int i=0;i<=N;i++) {
        for (int j=0;i+j<=N;j++) {
            for (int k=0;i+j+k<=N;k++) {
                int sum = i*1000 + j*5000 + k*10000;
                // cout << i << j << k << endl;
                // cout << sum << endl;
                if ( sum ==Y && i+j+k == N) {
                    // cout << sum << endl;
                    a=k;
                    b=j;
                    c=i;
                    flag = true;
                    break;
                }
                sum = 0;
            }
            if (flag) break;
        }
        if (flag) break;
    }
    if ( flag ) {
        cout << a << " " << b << " " << c << " " << endl;
    } else {
        cout << -1 << " " << -1 << " " << -1 << " " << endl;
    }
}