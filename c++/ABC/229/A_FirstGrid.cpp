#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin >> s1 >> s2;
    int flug=0;
    if( (s1.at(0)=='#')and(s1.at(1)=='.')and(s2.at(0)=='.')and(s2.at(1)=='#')) {
        flug=1;
    } else if( (s1.at(0)=='.')and(s1.at(1)=='#')and(s2.at(0)=='#')and(s2.at(1)=='.') ){
        flug=1;
    }
    if(flug) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}