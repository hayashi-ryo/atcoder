#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
    vector<int> s(3);
    for (int i=0;i<3;i++) {
        cin >> s.at(i);
    }

    sort(s.begin(),s.end());
    // cout << s.at(0) << s.at(1) << s.at(2) << endl;
    cout << s.at(1) + s.at(2) << endl;
}