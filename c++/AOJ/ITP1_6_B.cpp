#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> S(13);
    vector<int> H(13);
    vector<int> C(13);
    vector<int> D(13);
    for (int i=1;i<=n;i++) {
        char c;
        int num=0;
        cin >> c >> num;
        if (c=='S') {S[num]=1;}
        else if(c=='H') {H[num]=1;}
        else if(c=='C') {C[num]=1;}
        else if(c=='D') {D[num]=1;}
    }
    for (int i=0;i<4;i++) {
        for (int j=1;j<=13;j++) {
            //cout << S[j] << endl;
            if(i==0) {
                if(S[j]!=1) {cout << "S " << j << endl;}
            } else if(i==1) {
                if(H[j]!=1) {cout << "H " << j << endl;}
            } else if(i==2) {
                if(C[j]!=1) {cout << "C " << j << endl;}
            } else if(i==3) {
                if(D[j]!=1) {cout << "D " << j << endl;}
            }
        } 
    } 
}