#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    vector <string> vec(0);
    S=S+S;
    for (int i=0;i<S.size()/2;i++) {
        vec.push_back(S.substr(i,S.size()/2));
    }
    sort(vec.begin(), vec.end());
    cout << vec.at(0) << endl;
    cout << vec.at(S.size()/2-1) << endl;
}