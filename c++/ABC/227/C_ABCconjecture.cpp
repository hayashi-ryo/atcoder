#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int64_t N=0;
    cin >> N;
    int64_t ans=0;
    for (int64_t a=1;a*a*a<=N;a++) {
        for (int64_t b=a;a*b*b<=N;b++) {
            int64_t Maxc;
            for (int64_t c=max(b,(N/(a*b)));;c++) {
                if (a*b*c<=N) {
                    Maxc=c;
                } else {break;}
            }
            ans += (Maxc-b+1);
        }
    }
    cout << ans << endl;
}
