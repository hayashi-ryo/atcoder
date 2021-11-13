#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0;
    cin >> N;
    vector<int> S(0);
    for (int i=0;i<N;i++) {
        int tmpS;
        cin >> tmpS;
        S.push_back(tmpS);
    }
    int ans = N;
    sort(S.begin(), S.end());
    for (int i=0;i<N;i++) {
        int flug=0;
        for (int j=1;j<143;j++) {
            for (int k=j;k<143;k++) {
                if(S[i]==(3*(j+k)+4*j*k)) {
                    ans--;
                    flug=1;
                    break;
                } if(S[i]<(3*(j+k)+4*j*k)){break;}
        }
        if(flug) {break;}
        }
    }
    cout << ans << endl;

}