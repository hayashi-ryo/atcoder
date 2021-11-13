#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0,K=0,A=0;
    cin >> N >> K >> A;
    int ans=A-1;
    for (int i=0;i<K;i++) {
        ans++;
        if(ans>N) {
            ans = 1;    
        }
        // cout << "i:" << i << " ans:" << ans << endl;
    }
    cout << ans << endl;
}