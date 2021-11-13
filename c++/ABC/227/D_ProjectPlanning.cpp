#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    vector<int64_t> a(n);
    for (int i=0;i<n;i++) {
        int64_t tmpa;
        cin >> tmpa;
        a[i]=tmpa;
    }
    sort(a.rbegin(), a.rend());
    int ans=0;
    int flug=0;
    for (int i=0;;i++) {
        sort(a.begin(), a.end(),std::greater<int>());
        for (int j=0;j<k;j++) {
            a[j]--;
            if(a[j]<0) {
                flug=1;
                break;
                }
        }
        if(flug){break;}
        ans++;
    }
    cout << ans << endl;
}
