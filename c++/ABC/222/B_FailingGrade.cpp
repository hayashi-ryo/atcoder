#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0,P=0;
    cin >> N >> P;
    int cnt=0;
    for (int i=0;i<N;i++) {
        int in=0;
        cin >> in;
        if(in<P) {cnt++;}
    }
    cout << cnt << endl;
}