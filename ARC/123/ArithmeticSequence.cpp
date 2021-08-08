#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t a=0, b=0, c=0;
    int64_t cnt=0;
    cin >> a >> b >> c;
    if( ((a+c)%2) == 0 ) {
        if ( ((a+c)/2) <= b) {
            cnt+= ( b-((a+c)/2))*2; //OK
        } else {
            cnt+= ( ((a+c)/2)-b); //OK
        } 
    } else {
        a+=1;
        cnt+=1;
        if ( ((a+c)/2) <= b) {
            cnt+= ( b-((a+c)/2))*2;
        } else {
            cnt+= ( ((a+c)/2)-b);
        } 
    }
    cout << cnt << endl;
}