#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    /*
    xox
    oxx
    xxo
    の繰り返し
    */
    string str;
    cin >> str;
    int flug = 0;
    for (string text:{"xox", "oxx", "xxo"}) {
        for (int i=0;i<str.size();i++) {
            if(text[i%3] != str[i]) {
                flug++;
                break;
            }
        }
        
    }
    if(flug!=3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


}