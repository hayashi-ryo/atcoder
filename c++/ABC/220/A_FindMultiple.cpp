#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int A=0,B=0,C=0;
    cin >> A >> B >> C;
    int flug=0;
    for (int i=A;i<=B;i++) {
        if(i%C==0) {
            cout << i << endl;
            flug=1;
            break;
        }
    }
    if (flug==0) {
        cout << -1 << endl;
    }
}