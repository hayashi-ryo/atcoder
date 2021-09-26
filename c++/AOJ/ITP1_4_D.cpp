#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin >> n;  
    vector<int> vec(n);//配列を宣言
    int64_t sum=0;
    for (int i=0;i<n;i++) {
        cin >> vec.at(i);
        sum += vec.at(i);
    }
    sort(vec.begin(), vec.end());

    cout << vec.at(0) << " " << vec.at(n-1) << " " << sum << endl;    
}