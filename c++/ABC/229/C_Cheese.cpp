#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,w;
    cin >> n >> w;
    vector<pair<long long,long long>> v(n);
    for(auto &x : v) {cin >> x.first >> x.second;}
    sort(v.rbegin(),v.rend());

    /* 
    使える量：w
    現在のループのチーズ：Bk
    使う量：min(w,Bk)
    */
    long long ans=0;
    for(auto &nx : v) {
        ans+=nx.first*min(w,nx.second);
        w-=min(w,nx.second);
    }
    cout << ans << endl;
}