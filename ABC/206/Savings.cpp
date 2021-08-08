#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int64_t N=0,x=0;
    cin >> N;

    for (int64_t i=1;i<100000000;i++) {
        x += i;
        if ( N == 0 ) {
            cout << N << endl;
            break;
        } else if ( x >= N) {
            cout << i << endl;
            break; 
        } 
    }

}