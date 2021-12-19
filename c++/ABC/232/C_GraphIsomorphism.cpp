#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> aoki_vec(n);
    vector<int> takahashi_vec(n);
    for (int i=0;i<m;i++) {
        int tmpa=0,tmpb=0;
        cin >> tmpa >> tmpb;
        aoki_vec[tmpa-1]++;
        aoki_vec[tmpb-1]++;
    }

    for (int i=0;i<m;i++) {
        int tmpc=0,tmpd=0;
        cin >> tmpc >> tmpd;
        takahashi_vec[tmpc-1]++;
        takahashi_vec[tmpd-1]++;
    }
    sort(aoki_vec.begin(),aoki_vec.end());
    sort(takahashi_vec.begin(),takahashi_vec.end());
    /*
    for (int i=0;i<m;i++) {
        cout << aoki_vec[i] << takahashi_vec[i] << endl;
    }*/
    if(aoki_vec==takahashi_vec) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}