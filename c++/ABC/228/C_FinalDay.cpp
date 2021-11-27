#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,k;
    cin >> n >> k;
    vector<int> p(n);
    for(auto &nx : p) {
        int a, b, c;
        cin >> a >> b >> c;
        nx = a + b + c;
    }
    vector<int> lank=p;
    sort(lank.rbegin(), lank.rend());
    int threshold=lank[k-1];

    for (int i=0;i<n;i++) {
        if((p[i]+300) >= threshold) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } 
}