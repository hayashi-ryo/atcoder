#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    string stra = to_string(a);
    if(b%2==0) {
        string strb = to_string(b/2);
        cout << stra + '0' + strb << endl;
    } else {
        string strb = to_string((b*10)/2);
        cout << strb + '0' + stra << endl;
    }
}