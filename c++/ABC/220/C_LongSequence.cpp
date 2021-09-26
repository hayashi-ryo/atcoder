#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0;
    cin >> N;
    vector<int64_t> vec(N);
    int64_t tmpsum=0;
    for (int i=0;i<N;i++) {
        cin >> vec.at(i);
        tmpsum+=vec.at(i);
    }
    int64_t X=0;
    cin >> X;
    int64_t q=X/tmpsum;
    int64_t p=N*q;
    int64_t sum=tmpsum*q;
    for (int i=0;i<N;i++) {
        sum+=vec.at(i);
        p++;
        if(sum>X) {break;}
    }
    cout << p << endl;
}