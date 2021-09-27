#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0;
    cin >> N;
    vector<int> S(13)=100;
    vector<int> H(13)=100;
    vector<int> C(13)=100;
    vector<int> D(13)=100;
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

    for (int i=0;i<13;i++) {
        if ((i+1)!=S.at(i)) {
            cout << "S " << i << endl; 
        }
    }
}