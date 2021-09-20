#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=0,b=0;
    cin >> a >> b;

    if( a==0){
        cout << "Silver" << endl;
    } else if(b==0) {
        cout << "Gold" << endl;
    } else {
        cout << "Alloy" << endl;
    }

}