#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a=0,b=0;
    int N=3000;
    for (int i=0;i<N;i++) {
        cin >> a >> b;
        if (a>b) {
            int tmp = b;
            b=a;
            a=tmp;
        } else if( (a==0) and (b==0) ) {
            break;
        }
        cout << a << " " << b << endl;
        
    }
}