#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int W=0,H=0,x=0,y=0,r=0;

    cin >> W >> H >> x >> y >> r;

    if ((0<=(x-r)) and ((x+r)<=W) and (0<=(y-r)) and ((y+r)<=H) ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}