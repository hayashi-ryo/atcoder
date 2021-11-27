#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int s, t;
    double x;
    cin >> s >> t >> x;
    x = x + 0.5;
    //cout << x << endl;
    if (s<=t) {
        if ((s<=x)and(x<=t)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if ((s<=x)or(x<=t)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}