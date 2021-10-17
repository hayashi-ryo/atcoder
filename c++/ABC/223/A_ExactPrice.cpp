#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int X=0;
    cin >> X;
    if ((X%100==0) && (X>=100)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}