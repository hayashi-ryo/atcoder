#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a=0,b=0,c=0;
    cin >> a >> b >> c;
    if ( (a<b) and (b<c) ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}