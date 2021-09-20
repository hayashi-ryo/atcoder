#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << fixed << setprecision(20);
    int a=0,b=0;
    cin >> a >>b;
    int d=0,r=0;
    d = a/b;
    r = a%b;
    double f = double(a)/double(b);
    cout << d << " " << r << " " << f << endl;
}