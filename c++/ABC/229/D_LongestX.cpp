#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    long long k;
    cin >> s >> k;
    long long n=s.size();
    vector<long long> cnt(n+1);
    for (long long i=0;i<n;i++) {
        if(s[i]=='.') {
            cnt[i+1] = cnt[i]+1;
        } else {
            cnt[i+1] = cnt[i];
        }
    }

    long long ans=0;
    long long r=0;
    for (long long i=0;i<n;i++) {
        while ((r<n)and(cnt[r+1]-cnt[i]<=k)){
            r++;
        }
        ans = max(ans,r-i);
    }
    cout << ans << endl;
}