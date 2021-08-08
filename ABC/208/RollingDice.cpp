#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
    int a=0,b=0;

    cin >> a >> b;

    if( (b<=6*a) && (b>=a) ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}