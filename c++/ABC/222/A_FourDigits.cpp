#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string N;
    cin >> N;
    while(N.size()<4){
        N = "0"+N;
    }
    cout << N << endl;
}