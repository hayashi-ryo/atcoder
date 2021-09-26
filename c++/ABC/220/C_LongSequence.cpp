#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0;
    cin >> N;
    vector<int> vec(N);
    int64_t tmpsum=0;
    for (int i=0;i<N;i++) {
        cin >> vec.at(i);
        tmpsum+=vec.at(i);
    }
    int64_t X=0;
    cin >> X;
    int i=(X/tmpsum);
    //cout << i << endl;
    int64_t sum=i*tmpsum;//配列を足し合わせていく
    int li=0;
    while(sum<X) {
        int tmp=li%N;
        sum+=vec.at(tmp);
        li++;
        //cout << sum << " " << i << endl;
    }
    cout << i*N+li << endl;
}