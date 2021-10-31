#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2,s3,T;
    cin >> s1 >> s2 >> s3 >> T;
    string ans;
    for (int i=0;i<T.size();i++) {
        //cout << t[i] << endl;
        if (T[i]=='1') {
            ans = ans + s1;
        } else if (T[i]=='2') {
            ans = ans + s2;
        } else if (T[i]=='3') {
            ans = ans + s3;
        }
    }
    cout << ans << endl;
}