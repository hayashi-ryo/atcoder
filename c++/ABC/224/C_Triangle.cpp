#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0;
    cin >> N;
    vector<vector<int64_t>> vec(N,vector<int64_t>(2));
    for (int i=0;i<N;i++) {
        for (int j=0;j<2;j++) {
            cin >> vec.at(i).at(j);
        }
    }
    
    int count=0;
    for (int i=0;i<N;i++) {
        for (int j=i+1;j<N;j++) {
            for (int k=j+1;k<N;k++) {
                //AB間の傾きとAC間の傾きが等しいものがあれば三角形が作れない
                double AB = 0;
                double AC = 0;
                if( (vec.at(i).at(0) - vec.at(j).at(0))==0 ) {
                    AB=0;
                } else {
                    AB = (vec.at(i).at(1) - vec.at(j).at(1)) / (vec.at(i).at(0) - vec.at(j).at(0));
                }

                if( (vec.at(i).at(0) - vec.at(k).at(0))==0 ) {
                    AC=0;
                } else {
                    AB = (vec.at(i).at(1) - vec.at(k).at(1)) / (vec.at(i).at(0) - vec.at(k).at(0));
                }
                if (AB!=AC) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}