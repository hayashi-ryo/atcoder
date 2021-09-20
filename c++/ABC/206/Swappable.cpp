#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t N = 0;
    // 配列の定義
    cin >> N ;
    vector<int64_t> vec(N);
    for (int64_t i=0;i<N;i++) {
        cin >> vec.at(i);
        }
    int64_t count = N * (N-1)/2;
    // sortと計算
    sort(vec.begin(), vec.end());
    int64_t cnt =1;
    vec.push_back(-1);
    for (int i=0;i<N;i++) {
        if(vec.at(i)!=vec.at(i+1)) {
            count -= ((cnt * (cnt-1))/2);
            cnt=1;
        } else {
            cnt++;
        }
    }
    cout << count << endl; 

}