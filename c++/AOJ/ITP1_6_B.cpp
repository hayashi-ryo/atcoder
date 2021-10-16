#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0;
    cin >> N;
    vector<int> S(0);
    vector<int> H(0);
    vector<int> C(0);
    vector<int> D(0);
    for (int i=0;i<N;i++) {
        char mark;
        int fig=0;
        cin >> mark >> fig;
        if (mark=='S') {
            S.push_back(fig);
        } else if (mark=='H') {
            H.push_back(fig);
        } else if (mark=='C') {
            C.push_back(fig);
        } else if (mark=='D') {
            D.push_back(fig);
        }
    }
    sort(S.begin(), S.end());
    sort(H.begin(), H.end());
    sort(C.begin(), C.end());
    sort(D.begin(), D.end());
    int tmpS=0,tmpH=0,tmpC=0,tmpD=0;
    for (int i=0;i<13;i++) {
        if ((i+1)!=S.at(tmpS)) {
            cout << "S " << i+1 << endl; 
        } else {tmpS++;}
    }
    for (int i=0;i<13;i++) {
        if ((i+1)!=H.at(tmpH)) {
            cout << "H " << i+1 << endl; 
        } else {tmpH++;}
    }
    for (int i=0;i<13;i++) {
        if ((i+1)!=C.at(tmpC)) {
            cout << "C " << i+1 << endl; 
        } else {tmpC++;}
    }
    for (int i=0;i<13;i++) {
        if ((i+1)!=D.at(tmpD)) {
            cout << "D " << i+1 << endl; 
        } else {tmpD++;}
    }
    //cout << "S" << S.size() << endl;
    //cout << "H" << H.size() << endl;
    //cout << "C" << C.size() << endl;
    //cout << "D" << D.size() << endl;
}