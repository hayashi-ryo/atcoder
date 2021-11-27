#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,k;
    cin >> N >> k;
    vector<int> point(N);
    vector<int> lank(N);
    for (int i=0;i<N;i++) {
        int day1=0,day2=0,day3=0;
        cin >> day1 >> day2 >> day3;
        point.at(i)=(day1+day2+day2);
        lank.at(i)=(day1+day2+day2);
    }
    sort(lank.rbegin(),lank.rend());
    // k番目の得点を出す
    int Threshold = lank.at(k-1);
    // cout << "Threshold:" << Threshold << endl;
    for (int i=0;i<N;i++) {
        int tmpPoint = point.at(i);
        // cout << "i:" << i << ":" << tmpPoint << endl;
        if((tmpPoint+300)>=Threshold) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}