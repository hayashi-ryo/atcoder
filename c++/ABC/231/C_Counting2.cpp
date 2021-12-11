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
    sort(a.rbegin(),a.rend());

    for (long long i=0;i<q;i++) {
        long long thre = vecq.at(i);
        count_if(a.begin(),a.end(), [](long long cnt, thre){ return cnt >= thre; });
        // std::count_if(coins.begin(), coins.end(), [](int n){ return (n == 1) || (n == 5); })
        /*
        long long cnt=0;
        for (long long j=0;j<n;j++) {
            if(a[j]>=vecq[i]) {
                cnt++;
                if(cnt==n) {
                    cout << cnt << endl;
                    break;
                }
            } else if(a[j]<vecq[i]){
                cout << cnt << endl;
                break;
            }
        }*/
    }

}