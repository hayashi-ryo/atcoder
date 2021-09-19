#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int hour=0,min=0,sec=0;
    int total=0;
    cin >> total;

    sec = total%60;
    min = (total-sec)%3600/60;
    hour = total/3600;
    

    cout << hour << ":" << min << ":" << sec << endl;
}