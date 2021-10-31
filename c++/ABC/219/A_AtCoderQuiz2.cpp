#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int X=0;
    cin >> X;

    if (X<40) {
        cout << 40-X << endl;
    } else if (40<=X and X<70) {
        cout << 70-X << endl;
    } else if (40<=X and X<90) {
        cout << 90-X << endl;
    } else if (90<=X) {
        cout << "expert" << endl;
    }
}