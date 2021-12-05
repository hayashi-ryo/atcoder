#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n>=42) {
        string str = "AGC0";
        cout << str + to_string(n+1) << endl;
    } else if (n<=9) {
        string str = "AGC00";
        cout << str + to_string(n) << endl;
    } else {
        string str = "AGC0";
        cout << str + to_string(n) << endl;
    }
}