#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    vector<string> s(n);
    for (int i=0;i<n;i++) {
        string tmp;
        cin >> tmp;
        s.at(i) = tmp;
    }
    sort(s.begin(),s.end());
    int maxcnt=0;
    string maxs;
    for (int i=0;i<n;i++) {
        int tmpcnt;
        if(i==0) {
            maxs=s[i];
            maxcnt++;
            tmpcnt++;
        }
        if((s[i]==s[i-1])) {
            tmpcnt++;
        } else {
            tmpcnt=0;
        }
        if(tmpcnt>maxcnt) {
            maxcnt = tmpcnt;
            maxs=s[i];
        }
    }

    cout << maxs << endl;
}