#include <iostream>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    long long n,q;
    cin >> n >> q;
    vector<long long> a(n);
    vector<long long> vecq(q);
    for(auto &v : a) {cin >> v;}
    for(auto &v : vecq) {cin >> v;}
    sort(a.begin(),a.end());

    for (long long i=0;i<q;i++) {
        cout << a.end() - lower_bound(a.begin(), a.end(), vecq[i]) << endl;
    }

}