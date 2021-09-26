#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int H=0,W=0;
    int flug=0;//HW両方が0になった時に1にするフラグとして扱う
    while(flug==0) {
        cin >> H >> W;
        if ( (H==0) && (W==0) ) {
            flug=1;
        }
        for (int i=0;i<H;i++) {
            for (int j=0;j<W;j++) {
                if((i==0) || (j==0) || (j==W-1) || (i==H-1)) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}