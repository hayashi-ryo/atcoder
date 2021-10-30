#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0;
    cin >> N;
    vector<vector<int>> vec(N-1,vector<int>(2));
    for (int i=0;i<N-1;i++) {
        for (int j=0;j<2;j++) {
            cin >> vec.at(i).at(j);
        }
    }
    int decA=0,decB=0;
    int cntA=0,cntB=0;
    int flug=0;
    for (int i=0;i<N-1;i++) {
        int a=0;
        a=vec.at(i).at(0);
        int b=0;
        b=vec.at(i).at(1);
        if(i==0) {
            decA=vec.at(i).at(0);
            decB=vec.at(i).at(1);
        } else {
            if ( (decA==a)or(decA==b) ){cntA++;}
            if ( (decB==a)or(decB==b) ){cntB++;}
        }
        if ( (cntA!=i)and(cntB!=i) ){
            flug=1;
            break;
        }
    }
    if(flug) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}