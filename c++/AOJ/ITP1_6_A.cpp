#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=0;
    cin >> n;
    vector<int> vec(n);
    for (int i=0;i<n;i++) {
        cin >> vec.at(i);
    }
    for (int i=n;i>0;i--) {
        cout << vec.at(i-1);
        if(i-1>0) {
            cout << " ";
        } else {
            cout << endl;
        }
    } 
}