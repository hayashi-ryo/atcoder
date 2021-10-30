#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    sort(S.begin(), S.end());
    S.erase(unique(S.begin(), S.end()), S.end());
    if(S.size()==1) {
        cout << 1 << endl;
    } else if(S.size()==2) {
        cout << 3 << endl;
    } else if(S.size()==3) {
        cout << 6 << endl;
    }   
}
