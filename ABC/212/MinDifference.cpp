#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t N=0,M=0;
    cin >> N >> M;
    vector <int64_t> vec_A(N);
    vector <int64_t> vec_B(M);
    for (int i=0;i<N;i++) {
        cin >> vec_A.at(i);
    } 
    for (int i=0;i<M;i++) {
        cin >> vec_B.at(i);
    }
    sort(vec_A.begin(), vec_A.end());
    sort(vec_B.begin(), vec_B.end());
    
    int64_t tmp = 1000000000;
    int64_t column=0;
    for (int i=0;i<N;i++) {
        cout << "c" <<column <<endl;
        for (int j=column;j<M;j++) {
            cout << tmp <<endl;
            if ( tmp > abs( vec_A.at(i)-vec_B.at(j) ) ) {
                tmp = abs(vec_A.at(i)-vec_B.at(j));
                column =j;
            } else if (j!=0) {
                if (abs(vec_A.at(i)-vec_B.at(j)) > abs(vec_A.at(i)-vec_B.at(j-1)) ) {
                    // cout << j << endl;
                    //cout << "Bg" << endl;
                    break;
                }
            }
        }
    }
    cout << tmp << endl;
}